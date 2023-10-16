# CS356 Notes

## Chapter 2: Cryptography Tools

#### Attacking Symmetric Encryption

- Technique for providing confidentiality for transmitted and stored data (single-key encryption)

#### Single-Key Encryption

- Requirements for Single Key Encryption include:
  - Secure Transfer of the Secure Key and a Strong Encryption algorithm

#### Single-Key Encryption Algorithms (Block Ciphers)

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

#### Message Authentication

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

#### MAC Algorithm Processes

1. Plain text
2. Run through the MAC algorithm
3. Get the Hash Code (Digest)
4. Append the Digest to the Message
5. Transmit the message + the Digest
6. Run the Digest through the MAC algorithm and then compare the digest to the original
7. If authenticated then decrypt the message using the key

#### Security of Hash Functions

- CryptoAnalysis: Exploiting logical weakness of algorithm
- Brute-Force Attack: Strength of the hash function depends on the length of the hash code produced by the algorithm

#### Public-Key Encryption Structure

- Created in 1976 by Diffie and Hellman
- Based on mathematical functions
- Asymmetric Security: Has two keys a private and public key
- some for m of protocol is used for the distribution of the keys.

## Chapter 3: User Authentication

## Chapter 4: User Authorization

## Chapter 5: Database Security

#### Databases

- SQl Injection ~ A free form string that is sent to the database as a query
- SQl Delimiting ~ Is a character in front of a legit query.
- DBMS (Database Management Systems) ~ Is used for creating, managing, and querying databases

- DML (Data Manipulation Language) ~ Query
- DDl (Data Definition Language) ~ Making a Table

#### Relational Databases

- Allows the creation of multiple linked tables through a unique value identifier in each row (primary key) or a (foreign key)
- View ~ A virtual table based on a `SELECT` statement

- Tuple <-> Row <-> Record
- Relation <-> Table <-> File
- Attribute <-> Column <-> Field

## Chapter 6: Malicous Software (Malware)

- How does malware move from one system to another?

  - It depends on what it is.

- What is a `port` on linux?

  - It is a mailbox that is used for communication

- Types of Malware (Termininology)

  - APT (Advanced Persistent Threat)
  - Adware ~
  - Attack Kit ~ Allows user to a set of hacker tools. Can be purchased off the dark web
  - Back-Door (trapdoor) ~
  - Downloaders (Propagation method) ~
  - Drive-by-download ~ Normally used on a website
  - Exploits ~
  - Flooders ~
  - Logic Bomb ~ An event and lies dormant till a pre-defined condition
  - Key Loggers ~ Captures key strokes and compromises system
  - Macro Virus ~ A type of virus that executes code normally disguised as a document and executes when the document is viewed
  - Mobile Code ~
  - Rootkit ~ Allows you to get back into a system
  - Spammer Programs
  - Spyware ~
  - Trojan Horse ~
  - Virus ~
  - Worm ~
  - Zombie ~ Program is activated on one machine and is activated to launch itself on other machines

- How do we classify malware?

  - How does it spread (propagates)
    - infection of existing content
    - Exploit software vulnerabilities by worms or drive-by-downloads
    - social engineering
  - The payload it executes
    - Corruption
    - Theft of service/make the system a zombie agent
    - Theft of information

- Attack Kit (Would make a good report)

- Attack Sources

  - Politically Motivated Attackers ("Hack-tavist")
  - Criminals and Organized Crime
  - Organizations that sell their services to companies and nations
  - National Government Agencies

- Advanced Persistent Threats
  - Well Resourced, persistent application of a wide variety of intrusion technologies and malware to selected targets
  - Differ from other attack types because of careful target selection
  - Attacks
    - Aim ~ varies from theft to intellectual property
    - Techniques Used:
      - Social Enginneering
      - Spear Phishing
      - Drive-by-Download
    - Intent
      - To infect the system
- Virus
  - It infects programs that already exist and it replicates and goes on to infect other content
  - When attached the virus can do anything the program is allowed to do
  - Compnonents:
    - Look around for programs to infect, Trigger to execute the malware, the payload
    - 4 Phases: Dormant -> Trigger -> Propagate -> Execute

- Macro Virus
  - Uses scripting code to infect a variety of systems easily because normally the malicous code is attached to a document. 

- Polymorphic Virus ~ A virus that mutates with every infection
- Metamorphic Virus ~ A virus that mutates and rewrites itself completely at each iteration a may change behavior and appearance.
- Stealth Virus ~ A form of virus that is explicitly designed to hid from detection by anti virus software
- Encrypted Virus ~ A portion of the virus creates a random encryption key and encrypts the rest of the virus

## Chapter 7: Denial of Service Attacks

- 
