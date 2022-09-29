# Computer Network

## Common Terms
- **Packet**: a unit of data sent over a network
- **Packet Switching**: a method of transmitting data over a network by breaking it into small pieces called packets
- **Protocol**: a set of rules that governs the exchange of information between two or more entities
- **Internet Protocol (IP)**: a set of rules that governs the exchange of data over the Internet
- **IP vs Protocol**: IP is a protocol that defines how to route packets from one host to another. Protocol is a set of rules that governs the exchange of information between two or more entities.
- **Reverse Proxy**: a proxy server that sits in front of one or more web servers and forwards client requests to the appropriate web server
- **Forward Proxy**: a proxy server that sits in front of one or more web servers and forwards client requests to the appropriate web server
- **Load Balancer**: a device that distributes network or application traffic across a number of servers
- **Network Address Translation (NAT)**: a method of remapping one IP address space into another by modifying network address information in the IP header of packets while they are in transit across a traffic routing device
- **DNS vs DHCP**: DNS is a protocol that translates domain names to IP addresses. DHCP is a protocol that assigns IP addresses to devices on a network.
- **DNS vs DNS Server**: DNS is a protocol that translates domain names to IP addresses. DNS Server is a server that implements the DNS protocol.
- **Transmission Control Protocol (TCP)**: a protocol that provides reliable, ordered, and error-checked delivery of a stream of octets between applications running on hosts communicating via an IP network
- **User Datagram Protocol (UDP)**: a communications protocol that is primarily used for establishing low-latency and loss-tolerating connections between applications on the Internet
- **Port**: a logical construct that identifies a specific process or a type of network service
- **Port Number**: a number that identifies a specific process or a type of network service
- **Socket**: a combination of an IP address and a port number
- **CIDR**: a compact representation of an IP address and its associated routing prefix
- **CIDR Notation**: a compact representation of an IP address and its associated routing prefix
- **Classless Inter-Domain Routing (CIDR)**: a method of allocating IP addresses and routing IP traffic on the Internet
- **Routing Prefix**: a contiguous block of IP addresses that are assigned to a single network
- **Routing Table**: a table that contains information about the networks that are directly connected to a router and the networks that are reachable through other routers
- **Default Gateway**: a router that is used to forward packets to networks that are not directly connected to the router
- **Routing Protocol**: a protocol that is used to exchange routing information between routers
- **Routing Information Protocol (RIP)**: a distance-vector routing protocol that is used to exchange routing information between routers
- **Open Shortest Path First (OSPF)**: a link-state routing protocol that is used to exchange routing information between routers
- **Border Gateway Protocol (BGP)**: a path-vector routing protocol that is used to exchange routing information between autonomous systems
- **Autonomous System (AS)**: a collection of IP prefixes that are run by a single organization
- **Routing Information Protocol Next Generation (RIPng)**: a distance-vector routing protocol that is used to exchange routing information between IPv6 routers
- **Open Shortest Path First Next Generation (OSPFv3)**: a link-state routing protocol that is used to exchange routing information between IPv6 routers
- **Border Gateway Protocol Next Generation (BGP-4)**: a path-vector routing protocol that is used to exchange routing information between IPv6 autonomous systems
- **Network Address Translation (NAT)**: a method of remapping one IP address space into another by modifying network address information in the IP header of packets while they are in transit across a traffic routing device


 
## OSI model
- **Application layer**: end devices
- **Presentation layer**: data format. encryption and compression
- **Session layer**: session management
- **Transport layer**: end-to-end communication. TCP and UDP
- **Network layer**: forwarding packets and routing.
- **Data link layer**: error detection and correction. 
- **Physical layer**: physical transmission


## TCP vs UDP
- TCP is a connection-oriented protocol, while UDP is a connectionless protocol.
- TCP provides reliable, ordered, and error-checked delivery of a stream of octets (bytes) between applications running on hosts communicating via an IP network.
- UDP provides a connectionless datagram service that emphasizes reduced latency over reliability.
- Ex: TCP is used for HTTP, FTP, SMTP, and UDP is used for DNS, DHCP, and TFTP.

## HTTP vs HTTPS
- HTTP is a protocol that is used to transfer data over the web. HTTPS is HTTP over TLS/SSL.

## OSI vs TCP/IP
- OSI is a reference model for networking, while TCP/IP is a set of protocols that implement the model.

## Handshake
- A handshake is a sequence of messages exchanged between two or more computing devices, or between a computer and a user, in order to set up a direct connection between the devices and establish the parameters of the connection.
- TCP handshake: SYN, SYN-ACK, ACK
- TLS handshake: ClientHello, ServerHello, Certificate, ServerKeyExchange, ServerHelloDone, ClientKeyExchange, ChangeCipherSpec, Finished, ChangeCipherSpec, Finished
- TLS handshake is a subset of TCP handshake.

## Subnet Mask
- A subnet mask is a 32-bit number that is used to identify the network portion of an IP address.
- The subnet mask is used to divide an IP address into a network address and a host address.
- The subnet mask is used to determine which part of an IP address is the network address and which part is the host address.

## Port Number
- A port number is a 16-bit number that is used to identify a specific process or a type of network service.
- The range of port numbers is 0 to 65535.
- 0 to 1023 are well-known ports.
- 1024 to 49151 are registered ports.
- 49152 to 65535 are dynamic or private ports.

## Network Protocols
- **TCP**: Transmission Control Protocol
- **UDP**: User Datagram Protocol
- **IP**: Internet Protocol
- **ICMP**: Internet Control Message Protocol
- **ARP**: Address Resolution Protocol
- **RARP**: Reverse Address Resolution Protocol
- **DHCP**: Dynamic Host Configuration Protocol
- **DNS**: Domain Name System protocol
- **HTTP**: Hypertext Transfer Protocol
- **HTTPS**: HTTP over TLS/SSL
- **FTP**: File Transfer Protocol
- **SMTP**: Simple Mail Transfer Protocol
- **IMAP**: Internet Message Access Protocol
- **POP3**: Post Office Protocol version 3
- **SSH**: Secure Shell
- **Telnet**: unencrypted remote login protocol
- **SNMP**: Simple Network Management Protocol
- **NTP**: Network Time Protocol
- **LLDP**: Link Layer Discovery Protocol
- **STP**: Spanning Tree Protocol
- **RSTP**: Rapid Spanning Tree Protocol
- **VLAN**: Virtual Local Area Network
- **VTP**: VLAN Trunking Protocol
- **RPC**: Remote Procedure Call
- **NFS**: Network File System
- **SMB**: Server Message Block


