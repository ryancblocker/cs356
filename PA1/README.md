# Programming Assignment 1 - Ryan Blocker (833058080)

## Block and Stream Cipher Program

### Building the Program

To build the program, use the provided Makefile:

```bash
make
```

### Running the Program

```bash
./PA1 <B or S> <input_file> <output_file> <key_file> <E or D>
```

- < B or E >: Specify 'B' for Block Cipher or 'S' for Stream Cipher.
- <input_file>: The input file containing data to be encrypted or decrypted.
- <output_file>: The output file where the result will be saved.
- <key_file>: The key file containing the encryption key (e.g. "COMPUTER76543210").
- < E or D >: Specify 'E' for encryption or 'D' for decryption.

### To Refresh the Project

```bash
make clean
```
