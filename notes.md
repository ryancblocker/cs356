# CS356 Notes

## Chapter 2: Cryptography Tools

### Attacking Symmetric Encryption

- Technique for providing confidentiality for transmitted and stored data (single-key encryption)

### Single-Key Encryption

- Requirements for Single Key Encryption include:
  - Secure Transfer of the Secure Key and a Strong Encryption algorithm

### Single-Key Encryption Algorithms (Block Ciphers)

- **Data Encryption Standard (DES)**
  - Used to be most widely used
  - Key Size: 56 bits
  - Average time to crack: 1 hour
- **Triples DES (3DES)**
  - Repeats the DES algorithm 3 times
  - Average time to crack: 5.8\*10^20 years
- **AES**

  - NIST called for a request for a new algorithm to replace AES in 1997 that would improve efficiency
  - symmetric block cipher
  - 128 bit data and pair it with 128/192/256 bits of data blocks
  - Key Size: 256 bits
  - Average Time to Crack: 5.3\*10^17 years

- **Block Ciphers**

  - Process data one block at a time
  - You can reuse the keys
  - more common

- **Stream Ciphers**
  - Processes the input elements continuously one byte at a time
  - You can re-use the keys
  - ...

### Message Authentication

- MAC (Message Authentication Code)

  - Protects Against active attacks
  - Verifies the received message as authentic
    - Has the data been altered?
    - Is it timely and in the correct order?
    - Is it from the source or somewhere else?
  - You can also use conventional encryption

- A message encryption by itself does NOT provide a secure form of authentication
- It is possible to combine authentication and confidentiality in a single algorithm
  - Normally a separate function
- You can check that the digest is authentic before decrypting the data

- Plain text -> MAC algorithm -> Hash Code (Digest) -> append to message -> transmit the message -> run through the Mac algorithm and then compare the digest to the original
