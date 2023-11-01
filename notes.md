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

- **What is a Denial of Service Attack**

  - Denial of Service Attack ~ _It is a form of attack on the **availability** of some service_
  - Some targets of attack could be:
    - **Network Bandwidth**: Aims to attack an organizations ISP provider and the capacity of their network links connecting a server to the internet
    - **System Resources**: Attacker aims to overload or crash the network
    - **Application Resources**: Attacker creates a bunch of valid requests that take up a significant amount of resources that limits the applications ability to respond to requests from other users.

- **Flooding Attacks**: Aim of this attack is to overwhelm the capacity of the network connection to the target organization. The following attack are kinds of requests that are sent to overwhelm the network connection

  - ICMP Flood: Ping flood using ICMP echo packets. Traditionally these packets are used as a diagnostic tool
  - UDP Flood; Uses UDP packets directed to some port number on the target system
  - TCP SYN Flood: Sends TCP packets to the target system. Attacker aims to send a large volume of packets over quality system code in each one.

- **Source Address Spoofing**

  - Attackers can forge an IP address via the raw socket interface on the operating systems
  - Makes attacking systems harder to identify

  - Attacker generates large number of volumes of packets that have the target system as the destination address

- **Distributed DoS Attacks**

  - Use of multiple systems to generate attacks
  - Attacker uses a flaw in an operating system or in a common application to gain access and installs their program onto it (zombie).
  - Large collection of such systems under the control of one attacker's control can be created forming a botnet.

- **Reflection Attacks**

  - Attacker sends packets to a known service on the intermediary with a spoofed source address of the actual target system.
  - When the intermediary responds, the response is sent to the target.
  - "Reflects" the attack off of the intermediary (reflector)
  - Goal to generate enough volumes of packets to flood the link to the target system.
  - To defend against this you must block spoofed source packets

- \*\*DNS Amplification Attacks

  - Use Packets directed at a legitimate DNS server as the intermediary system
  - Attacker creates a series of requests containing the spoofed source address of the target system
  - Exploit DNS behavior to convert a small request into a much larger one (amplification)
  - Target is then flooded with responses
  - To defend against this you must prevent the use of spoofed source addresses

- **DoS Attack Defenses**

  - **Prevention** (Before)

    - Block Spoofed Source Addresses -> on the routers as close to the source as possible
    - Use modified TCP Connection Handling code
    - Cryptographically encode critical information in a cookie that is sent as the severs initial sequence number
    - Block IP Directed Broadcast
    - Block suspicious service and combinations
    - What are some good security practices

      - Just don't click it!
      - Lock your system if your not using it
      - Minimal Access Points (Least Privilege)
      - Use mirrored and replicated servers when high performance and reliability is required.

  - **Detection** (During)

    - Ideally you should have network monitors and IDS to detect and notify abnormal patterns, Anti-spoofing, Directed Broadcast, and Rate Limiting Filters should be implemented.

    1. Identify the type of attack
    2. Have the ISP trace packet flow back to the source
    3. Implement a contingency plan
    4. Update incident response

  - **What is a subnet?** ~ _Portion of the network confined to a hardware entry point_

## Chapter 8: Intrusion Detection (IDS)

- **Classes of Intruders**:

  - Cyber-Criminals: They are after Ransomware, identity theft, info theft, money, corporate espionage, financial credentials, and etc
  - Activists: Skill level is pretty low and their target can be pretty much anything. If their skill level is low they can go buy a toolkit. Their attacks are normally website defacement, DoS attacks
  - State-Sponsored Organizations: Groups of hackers sponsored by governments and they have a lot more resources behind them so they can do a lot more damage. The are also known as an APT or an advanced persistent threat. Which means you cant persecute them because they originate outside the country.
  - Others: hackers, stalkers, anyone with a motivation other than the ones previously listed. This could include "hobby hackers."

- **Skill Levels**:

  - **Apprentice or Novice**: primarily use attack toolkit
  - **Journeymen**: Hackers with sufficient technical skills to modify extend attack toolkit to look for new vulnerabilities
  - **Masters**: Can create toolkit, and write new powerful toolkit. A lot of these are employed by the APT's.

- **Examples of intrusion**:

  - Remote root compromise
  - web server defacement
  - guessing and cracking passwords
  - copying databases containing credit card numbers
  - viewing sensitive data without authorization
  - running a packet sniffer
  - distributing a pirated server
  - using an unsecured modem to access internal network
  - impersonating an executive to get information
  - using an unattended workstation

- **Intruder behavior**:

  - Target Acquisition and information gathering
  - information gathering or system exploit
  - initial access
  - maintaining access
  - privilege escalation
  - covering tracks

- **Security Intrusion** ~ Unauthorized act of bypassing the security mechanisms of a system

- **Intrusion Detection** ~ a hardware or software that gathers information on the system and make a decision

- **Intrusion Detection System**

  - Host Based IDS: monitors a single host for suspicions activity
  - Network Based IDS: monitors network traffic and analyzes network, transport, and application protocols to identify suspicion activity
  - Distributed or hybrid IDS: A combination of both of the previous methods of IDS

- **IDS Requirements**:

  1. Run continually
  2. impose a minimal overhead
  3. scale to monitor large numbers of systems
  4. be fault tolerant
  5. configured according to system security policies
  6. provide graceful degradation or service
  7. resist subversion
  8. adapt to changes in systems and users
  9. allow dynamic reconfiguration

- **Analysis Approaches**:
  - **Anomaly Detection** ~ involves the collection of data relating to the behavior of ligament users over a period of time. (EX. do my job day after day then one day dump the entire system to a USB!)
    - **Statistical:** analysis of observed data
    - **knowledge-based:** approach to classification based on a pre-defined set of rules for ligament data access.
    - **machine-learning:** creates classification model based on observed data
  - **Signature/Heuristic Detection** ~ Uses a set of known malicious data patterns or attack riles that are compared with current behavior. also known as misuse detection. Can only identify attacks that it knows the patterns of. Could be beaten by a poly or meta-morphic virus.
    - **Signature-based Detection:** Match a large collection of know patterns of malicious data against data stored on a system or in transit over a network
    - **Rule-based Detection:** Involves a set of rules for identifying known penetrations that would exploit known weakness

## Chapter 9: Firewalls and Intrusions

- **What is a firewall?**
- Kinds of Firewalls
  - Circuit Gateway
  - Packet Filtering
  - Stateful inspection
  - application-level gateway

- **Host-Based IPS (HIPS)**
  - Capability to be tailored ot a specific platform
  - Can use anomaly detection techniques to identify attacks
  - Examples of malicious behavior
    - Modification of resources
    - buffer overflow exploits
    - privilege escalation
    - access to email contact list
    - directory traversal

- **Network-based IPS (NIPS)**

- **Digital Immune System**

- **Malware Monitors**

- **Honeypot ~** is a unprotected system that organizations use to identify attackers and it is also used to distract the hackers from attacking the systems of value.

- **DMZ ~** Hosts that must have outward facing capability
