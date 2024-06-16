#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<unsigned char> padData(const vector<unsigned char>& data)
{
    vector<unsigned char> paddedData = data;
    int paddingSize = 16 - (data.size() % 16);
    for (int i = 0; i < paddingSize; i++)
    {
        paddedData.push_back(0x81);
    }
    return paddedData;
}

vector<unsigned char> xorBytes(const vector<unsigned char>& data1, const vector<unsigned char>& data2)
{
    vector<unsigned char> result;
    for (size_t i = 0; i < data1.size(); i++)
    {
        result.push_back(data1[i] ^ data2[i]);
    }
    return result;
}

vector<unsigned char> blockCipherEncrypt(const vector<unsigned char>& plaintext, const vector<unsigned char>& key)
{
    vector<unsigned char> paddedPlaintext = padData(plaintext);
    vector<unsigned char> encryptedData = xorBytes(paddedPlaintext, key);
    return encryptedData;
}

vector<unsigned char> blockCipherDecrypt(const vector<unsigned char>& ciphertext, const vector<unsigned char>& key)
{
    vector<unsigned char> decryptedData = xorBytes(ciphertext, key);
    return decryptedData;
}

vector<unsigned char> streamCipher(const vector<unsigned char>& data, const vector<unsigned char>& key)
{
    vector<unsigned char> result = data;
    for (size_t i = 0; i < data.size(); i++)
    {
        int keyIndex = i % key.size();
        result[i] = data[i] ^ key[keyIndex];
    }
    return result;
}

int main(int argc, char *argv[])
{ 

    if (argc != 6)
    {
        cerr << "\nIncorrect Number of Arguments the correct usage is: " << argv[0] << " <B|S> <input_file> <output_file> <key_file> <E|D>\n\n";
        exit(1);
    }

    char cipherType = argv[1][0];
    string inputFile = argv[2];
    string outputFile = argv[3];
    string keyFile = argv[4];
    char action = argv[5][0];

    ifstream keyStream(keyFile);
    string keyString;
    getline(keyStream, keyString);
    if (!keyStream.is_open())
    {
        cerr << "\nError opening the file:" << keyFile << "\n\n";
        exit(1);
    }
    keyStream.close();

    vector<unsigned char> key(keyString.begin(), keyString.end());

    ifstream inputStream(inputFile, ios::binary);
    vector<unsigned char> inputData((istreambuf_iterator<char>(inputStream)), (istreambuf_iterator<char>()));
    if (!inputStream.is_open())
    {
        cerr << "\nError opening the file:" << inputFile << "\n\n";
        exit(1);
    }
    inputStream.close();

    vector<unsigned char> outputData;

    if (cipherType == 'B')
    {
        if (action == 'E')
        {
            outputData = blockCipherEncrypt(inputData, key);
        } else if (action == 'D')
        {
            outputData = blockCipherDecrypt(inputData, key);
        } else
        {
            cerr << "\nYou must have either 'E' or 'D' (encryption or decryption)" << "\n\n";
            exit(1);
        }
    } 
    else if (cipherType == 'S')
    {
        outputData = streamCipher(inputData, key);
    } 
    else
    {
        cerr << "\nYou must have either 'B' or 'S' (block cipher or stream cipher)" << "\n\n";
        exit(1);
    }

    ofstream outputStream(outputFile, ios::binary);
    outputStream.write(reinterpret_cast<const char*>(outputData.data()), outputData.size());
    outputStream.close();

    return 0;
}



