# Database
## sharding vs partitioning
- Sharding is a horizontal partitioning of data, while partitioning is a vertical partitioning of data.
- sharding implies the data is spread across multiple computers while partitioning does not. 
- Partitioning is about grouping subsets of data within a single database instance.

## Indexing
- improves the speed of data retrieval operations.
- Indexes are smaller referential tables that holds row references against the indexed value
- 
## Master-slave replication
- Master-slave replication is a method of replicating data from a master database to one or more slave databases.
- The master database is the source of truth, and the slave databases are read-only copies of the master.

## Super-key, Candidate-key, Primary-key, Foreign-key, Composite-key, Alternate-key
- Super-key: Super subset of of candidate key
- Candidate-key: All the attributes that can uniquely identify
- Primary-key: Candidate-key that is chosen by the designer
- Unique-key: Candidate-keys that are not primary-keys
- Alternate-key: A key that is not the primary key but can be used to uniquely identify a record
- composite-key: A key that is made up of more than one attribute

## ACID properties
- Atomicity: All or nothing. Either all the operations in a transaction are completed or none of them are.
- Consistency: Database is always in a valid state. No transaction can break the rules of the database.
- Isolation: Transactions are isolated from each other. The effects of any transaction are not visible to any other transaction until that transaction is committed.
- Durability: Once a transaction is committed, it will remain so, even in the event of power loss, crashes, or errors.

## Normalization
- Normalization is a process used to organize a database into tables and columns.
### 1st normal form
- The information is stored in a relational table with each column containing atomic values. There should be no repeating groups of columns.
### 2nd normal form
- The table is in first normal form and all the columns depend on the table’s primary key.
### 3rd normal form
- The table is in second normal form and all of its columns are not transitively dependent on the primary key.
### Boyce-Codd normal form
- The table is in 3rd normal form and all of its columns are functionally dependent on the primary key.


<!-- =========================================================================================================== -->
# Javascript
## Common terms
- Primitive data types: string, number, boolean, null, undefined, symbol
- Non-primitive data types: object, array, function
- Hoisting: JavaScript's default behavior of moving all declarations to the top of the current scope.
- Closure: A closure is the combination of a function and the lexical environment within which that function was declared.
- Scope: The current context of execution, which determines the accessibility of variables. There are two types of scope: global and local.
- IIFE: Immediately Invoked Function Expression. A common pattern for creating local scopes.
- call-stack: A stack with a LIFO (Last In, First Out) structure.
- Callback: A callback is a function passed into another function as an argument, which is then invoked inside the outer function to complete some kind of routine or action.
- Execution context: contains the code that's currently running, and everything that aids in its execution

## Call/Apply/Bind
- Call: The call() method calls a function with a given this value and arguments provided individually.
- Apply: The apply() method calls a function with a given this value, and arguments provided as an array (or an array-like object).
- Bind: The bind() method creates a new function that, when called, has its this keyword set to the provided value.


## Event loop
- Event loop: to monitor the Call Stack and the Callback Queue
- Microtask queue is handled by the JavaScript engine before it moves on to the next task in the callback queue.
- The Callback queue is handled by the JavaScript engine after it has executed all tasks in the microtask queue.


## Promise/Async/Await/Eventing
- Promise: Promises are used to handle asynchronous operations in JavaScript.
- Event delegation: Event delegation is a technique involving adding event listeners to a parent element instead of adding them to the child elements.
- Event bubbling: The event propagation from the inner element to outer elements.
- Event capturing: The event propagation from the outer element to inner elements.
- Event propagation: The process of an event being triggered on an element, and then propagating up through its ancestors in the DOM tree.
- Event propagation order: Capturing phase, target phase, bubbling phase.

# React
## Virtual DOM
- “virtual” representation of the actual DOM. It is nothing but an object created to replicate the actual DOM.
- Virtual DOM is a programming concept where an ideal, or “virtual”, representation of a UI is kept in memory and synced with the “real” DOM by a library such as ReactDOM.
- React creates an in-memory data-structure cache, computes the resulting differences, and then updates the browser's displayed DOM efficiently.
- virtual DOM is much faster, because nothing gets drawn onscreen.
- virtual DOM is cheap to create because it doesn’t write to the screen

## React hooks
- useState: The useState hook lets you add state to function components.
- useEffect: The useEffect hook lets you perform side effects in function components.
- useContext: The useContext hook lets you use context in function components.
- useReducer: The useReducer hook lets you use a reducer in function components.
- useCallback: The useCallback hook lets you use a callback in function components.
- useMemo: The useMemo hook lets you use a memoized value in function components.
- useRef: The useRef hook lets you use a ref in function components.
- useImperativeHandle: The useImperativeHandle hook lets you use imperative handle in function components.
- useLayoutEffect: The useLayoutEffect hook lets you use layout effects in function components.

## React Events
- SyntheticEvent: React wraps the browser’s native event so that the behavior across different browsers is consistent.
- Event pooling: React will reuse the same SyntheticEvent object for performance reasons.
- Event delegation: Event delegation is a technique involving adding event listeners to a parent element instead of adding them to the child elements.
- Event bubbling: The event propagation from the inner element to outer elements.

# Node.js

## what/why
- Node.js is an open-source, cross-platform, JavaScript runtime environment that executes JavaScript code outside of a browser.
- It is generally fast, non-blocking, and uses Google’s V8 JavaScript engine to execute code, everything is asynchronous, yeilds great concurrency.

## How works
- Node.js retrieves the incoming requests and adds those to the Event Queue
- requests are then passed one-by-one through the Event Loop. It checks if the requests are simple enough not to require any external resources
- The Event Loop processes simple requests (non-blocking operations), such as I/O Polling, and returns the responses to the corresponding clients
- single thread from the Thread Pool is assigned to a single complex request. This thread is responsible for completing a particular blocking request by accessing external resources, such as computation, database, file system, etc.
- Once the task is carried out completely, the response is sent to the Event Loop that sends that response back to the client.
- The Event Loop checks the Event Queue and if there is an event, it will be added to the Call Stack
- The Call Stack executes the event and removes it from the Call Stack
- The Event Loop checks the Event Queue again and if there is an event, it will be added to the Call Stack

## Common terms
- Event loop: to monitor the Call Stack and the Callback Queue
- Microtask queue is handled by the JavaScript engine before it moves on to the next task in the callback queue.
- The Callback queue is handled by the JavaScript engine after it has executed all tasks in the microtask queue.
- Event-driven programming: Event-driven programming is a programming paradigm in which the flow of the program is determined by events such as user actions (mouse clicks, key presses), sensor outputs, or messages from other programs or threads.
- Event-driven architecture: Event-driven architecture is a software architecture pattern that focuses on the flow of data between software components.# Computer Network

## PORT
- PORT: A port is a communication endpoint. It is a logical construct that identifies a specific process or a type of network service.
 
## OSI model
- Application layer: end devices
- Presentation layer: data format. encryption and compression
- Session layer: session management
- Transport layer: end-to-end communication. TCP and UDP
- Network layer: forwarding packets and routing.
- Data link layer: error detection and correction. 
- Physical layer: physical transmission


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


<!-- =========================================================================================================== -->
# OOP
## OOP principles
- Encapsulation: The bundling of data with the methods that operate on that data, or the restricting of direct access to some of an object's components.
- Abstraction: The process of hiding the implementation details from the user, only the functionality will be provided to the user.
- Inheritance: The transfer of the characteristics of a class to other classes that are derived from it.
- Polymorphism: The provision of a single interface to entities of different types or the use of a single symbol to represent multiple different types.

## SOLID
- Single responsibility principle: A class should have one and only one reason to change, meaning that a class should have only one job.
- Open-closed principle: Objects or entities should be open for extension, but closed for modification.
- Liskov substitution principle: Objects in a program should be replaceable with instances of their subtypes without altering the correctness of that program.
- Interface segregation principle:  keeping things separated, and the Interface Segregation Principle is about separating the interfaces.
- Dependency inversion principle:  classes should depend upon interfaces or abstract classes instead of concrete classes and functions.

## Design patterns
### Creational patterns
- Abstract factory: Provides an interface for creating families of related or dependent objects without specifying their concrete classes.
- Builder: Separates object construction from its representation.
- Factory method: Creates an instance of several derived classes.
- Prototype: A fully initialized instance to be copied or cloned.
- Singleton: A class of which only a single instance can exist.

### Structural patterns
- Adapter: Match interfaces of different classes.
- Bridge: Separates an object’s interface from its implementation.
- Composite: A tree structure of simple and composite objects.
- Decorator: Add responsibilities to objects dynamically.
- Facade: A single class that represents an entire subsystem.
- Flyweight: A fine-grained instance used for efficient sharing.
- Proxy: An object representing another object.
  
### Behavioral patterns
- Chain of responsibility: A way of passing a request between a chain of objects.
- Command: Encapsulate a command request as an object.
- Interpreter: A way to include language elements in a program.
- Iterator: Sequentially access the elements of a collection.


<!-- =========================================================================================================== -->
# Operating System
## Process
- A process is an instance of a computer program that is being executed.

## Thread
- A thread is a unit of CPU utilization. It is the smallest sequence of programmed instructions that can be managed independently by a scheduler, which is typically a part of the operating system.

## Context switching
- Context switching is the process of saving the state of a process or thread that is being preempted so that it can be restored and execution can resume from the exact same point at a later time.

## Deadlock
- A deadlock occurs when two or more processes are blocked because each process is holding a resource and waiting for another resource acquired by some other process.

## Concurrence vs Parallelism
- Concurrency is the composition of independently executing processes, while parallelism is the simultaneous execution of (possibly related) computations.
- Concurrency is about dealing with lots of things at once. Parallelism is about doing lots of things at once.

# Database
## sharding vs partitioning
- Sharding is a horizontal partitioning of data, while partitioning is a vertical partitioning of data.
- sharding implies the data is spread across multiple computers while partitioning does not. 
- Partitioning is about grouping subsets of data within a single database instance.

## Indexing
- improves the speed of data retrieval operations.
- Indexes are smaller referential tables that holds row references against the indexed value
- 
## Master-slave replication
- Master-slave replication is a method of replicating data from a master database to one or more slave databases.
- The master database is the source of truth, and the slave databases are read-only copies of the master.

## Super-key, Candidate-key, Primary-key, Foreign-key, Composite-key, Alternate-key
- Super-key: Super subset of of candidate key
- Candidate-key: All the attributes that can uniquely identify
- Primary-key: Candidate-key that is chosen by the designer
- Unique-key: Candidate-keys that are not primary-keys
- Alternate-key: A key that is not the primary key but can be used to uniquely identify a record
- composite-key: A key that is made up of more than one attribute

## ACID properties
- Atomicity: All or nothing. Either all the operations in a transaction are completed or none of them are.
- Consistency: Database is always in a valid state. No transaction can break the rules of the database.
- Isolation: Transactions are isolated from each other. The effects of any transaction are not visible to any other transaction until that transaction is committed.
- Durability: Once a transaction is committed, it will remain so, even in the event of power loss, crashes, or errors.

## Normalization
- Normalization is a process used to organize a database into tables and columns.
### 1st normal form
- The information is stored in a relational table with each column containing atomic values. There should be no repeating groups of columns.
### 2nd normal form
- The table is in first normal form and all the columns depend on the table’s primary key.
### 3rd normal form
- The table is in second normal form and all of its columns are not transitively dependent on the primary key.
### Boyce-Codd normal form
- The table is in 3rd normal form and all of its columns are functionally dependent on the primary key.


# DevOps
## CI/CD
- CI/CD is a software development practice where developers regularly merge their code changes into a central repository, after which automated builds and tests are run.
- CI/CD is a combination of two practices: continuous integration (CI) and continuous delivery (CD).

## Load Balancing
- Load balancing is the process of distributing network or application traffic across a group of servers.
- Load balancers are devices that distribute network or application traffic across a group of servers.

## Reverse Proxy
- A reverse proxy is a type of proxy server that retrieves resources on behalf of a client from one or more servers. These resources are then returned to the client, appearing as if they originated from the proxy server itself.
- A reverse proxy commonly also performs tasks such as load-balancing, authentication, decryption or caching.

## Proxy
- A proxy server is a server that acts as an intermediary for requests from clients seeking resources from other servers.
- A proxy server may reside on the user’s local computer, or at any point between the user’s computer and destination servers on the Internet.

## CDN
- A content delivery network (CDN) is a geographically distributed network of proxy servers and their data centers.
- The goal is to distribute service spatially relative to end-users to provide high availability and high performance.

## Nginx
- Nginx is a web server that can also be used as a reverse proxy, load balancer, mail proxy and HTTP cache.
- **Master process** is the parent process that spawns worker processes to handle requests.
- **Worker process** is a child process spawned by the master process to handle requests.
- **Worker connections** is the maximum number of simultaneous connections that can be opened by a worker process.
- **Multi-processing** is a method of handling requests by forking multiple worker processes.
- **Multi-threading** is a method of handling requests by having each worker process handle multiple requests simultaneously.
- **Controls** are configuration directives that can be used to modify the behavior of Nginx.
  - **Main controls** are used to configure the Nginx process as a whole.
  - **Events controls** are used to configure the Nginx event processing system.
  - **HTTP controls** are used to configure the HTTP server.
- **Directives** are instructions that can be used to configure the behavior of Nginx.
  - **Simple directives** are single-line directives that only require a single value.
  - **Block directives** are multi-line directives that can contain other directives and values.
- **Contexts** are used to organize directives and represent the scope in which they are valid.
  - **Main context** is the default context in which directives are valid if no other context is specified.
  - **Events context** is used to specify directives that configure the event processing system.
  - **HTTP context** is used to specify directives that configure the HTTP server.
  - **Server context** is used to specify directives that apply to a specific server.
  - **Location context** is used to specify directives that apply to a specific location.
  - **If context** is used to specify directives that apply only if a given condition is true.
  - **Upstream context** is used to specify directives that apply to a group of servers.
  - **Mail context** is used to specify directives that apply to the IMAP/POP3 proxy server.
  - **Stream context** is used to specify directives that apply to the TCP/UDP proxy server.
- **Modules** are used to extend the functionality of Nginx.
- **Variables** are used to represent dynamic values in Nginx configuration files.

## Docker
- Docker is a set of platform as a service (PaaS) products that use OS-level virtualization to deliver software in packages called containers.
- **Dockerfile** is a text document that contains all the commands a user could call on the command line to assemble an image.
- **Docker image** is an executable package that includes everything needed to run an application.
- **Docker container** is a runtime instance of a Docker image.
- **Docker daemon** is the background service running on the host that manages building, running and distributing Docker containers.
- **Docker client** is the command line tool that allows the user to interact with the Docker daemon.
- **Docker Hub** is a cloud-based registry service that stores Docker images.
- **Docker Compose** is a tool for defining and running multi-container Docker applications.
- **Docker Machine** is a tool that lets you install Docker Engine on virtual hosts, and manage the hosts with docker-machine commands.
- **Docker Swarm** is a native clustering tool for Docker.
- **Docker Trusted Registry** is a Docker image storage and distribution service with role-based access control, image signing, and vulnerability scanning.

### Dockerfile commands
```bash
# Comment
FROM <image> # Base image
MAINTAINER <name> # Author
RUN <command> # Execute command
CMD ["executable","param1","param2"] # Execute command when container starts
EXPOSE <port> # Expose port
ENV <key> <value> # Set environment variable
ADD <src> <dest> # Copy file from host to container
COPY <src> <dest> # Copy file from host to container
ENTRYPOINT ["executable", "param1", "param2"] # Configure a container that will run as an executable
VOLUME ["<path>"] # Create mount point for external volumes
USER <user> # Set default user
WORKDIR <path> # Set working directory
```

## Docker Compose
- Docker Compose is a tool for defining and running multi-container Docker applications.
- **docker-compose.yml** is a YAML file that defines how Docker containers should behave in production.
- **docker-compose.dev.yml** is a YAML file that defines how Docker containers should behave in development.

### docker-compose.yml
```yaml
version: '3'
services:
  web:
    build: .
    ports:
      - "5000:5000"
    volumes:
      - .:/code
    links:
      - redis
  redis:
    image: "redis:alpine"
```

## Docker Swarm
- Docker Swarm is a native clustering tool for Docker.
- **Docker Swarm mode** is a native clustering tool for Docker.
- **Docker Swarm mode manager** is a node in a Docker Swarm cluster that is responsible for managing the cluster.
- **Docker Swarm mode worker** is a node in a Docker Swarm cluster that is responsible for executing containers.
- **Docker Swarm mode service** is a group of replicated Docker containers that are managed by the Docker Swarm mode manager.
- **Docker Swarm mode stack** is a group of interrelated services that share dependencies, and can be orchestrated and scaled together.

### Docker Swarm mode
```bash
# Initialize a swarm
docker swarm init
docker swarm init --advertise-addr <ip>
```

## Kubernetes
- Kubernetes is an open-source system for automating deployment, scaling, and management of containerized applications.
- **Kubernetes cluster** is a set of worker machines, called nodes, that run containerized applications.
- **Kubernetes master** is the cluster manager that schedules jobs onto nodes and maintains the desired state of the cluster.
- **Kubernetes node** is a worker machine in Kubernetes.
- **Kubernetes pod** is a group of one or more containers, with shared storage/network, and a specification for how to run the containers.
- **Kubernetes service** is an abstraction which defines a logical set of pods and a policy by which to access them.
- **Kubernetes label** is a key/value pair that is attached to objects, such as pods.
- **Kubernetes selector** is a label query over a set of resources.
- **Kubernetes namespace** is a way to divide cluster resources between multiple users.
- **Kubernetes deployment** is an API object that manages a replicated application.
- **Kubernetes replicaset** is the next-generation Replication Controller.
- **Kubernetes daemonset** ensures that all (or some) nodes run a copy of a pod.
- **Kubernetes job** creates one or more pods and ensures that a specified number of them successfully terminate.
- **Kubernetes cronjob** runs a job on a recurring schedule.
- **StatefulSet** is the workload API object used to manage stateful applications.
- **Kubernetes ingress** is an API object that manages external access to the services in a cluster, typically HTTP.
- **Kubernetes configmap** is an API object used to store non-confidential data in key-value pairs.
- **Kubernetes secret** is an object that contains a small amount of sensitive data such as a password, a token, or a key.
- **Kubernetes persistent volume** is a piece of storage in the cluster that has been provisioned by an administrator.
- **Kubernetes persistent volume claim** is a request for storage by a user.
- **Kubernetes service account** is an account for an application or a process.
- **Kubernetes container runtime** is the software that is responsible for running containers.
- **Kubernetes scheduler** watches for newly created pods with no assigned node, and selects a node for them to run on.
- **Kubernetes controller manager** is a daemon that embeds the core control loops shipped with Kubernetes.
- **Kubernetes API server** is a component of the Kubernetes master that exposes the Kubernetes API.
- **Kubernetes kubelet** is an agent that runs on each node in the cluster.
- **Kubernetes proxy** is a network proxy that runs on each node in your cluster, implementing part of the Kubernetes Service concept.

### Kubernetes commands
``` bash
kubectl get pods # List all pods in the namespace
kubectl get pods -o wide # List all pods in the namespace, with more details
kubectl get pods -o yaml # List all pods in the namespace, with YAML output
kubectl get pods -o json # List all pods in the namespace, with JSON output
kubectl get pods --all-namespaces # List all pods in all namespaces
kubectl get pods -l app=nginx # List all pods with label app=nginx
kubectl get pods -l app=nginx -o yaml # List all pods with label app=nginx, with YAML output
kubectl get pod nginx -o yaml # Get a pod and display the output as YAML
kubectl get pod nginx -o yaml --export # Get a pod, strip all cluster specific information, and display the output as YAML
kubectl edit pod nginx # Edit the definition of a pod
kubectl delete pod nginx # Delete a pod
kubectl logs nginx # Print the logs from a pod
kubectl logs -f nginx # Stream the logs from a pod
kubectl exec -it nginx -- /bin/bash # Run a command in a pod
kubectl port-forward nginx 8080:80 # Forward port 8080 on the local machine to port 80 on the pod
kubectl top pod nginx # Display the resource usage of a pod
kubectl top pod nginx --containers # Display the resource usage of all containers in a pod
kubectl top pod nginx --containers --containers # Display the resource usage of all containers in a pod, including the init containers
kubectl top node # Display the resource usage of all nodes
kubectl top node --containers # Display the resource usage of all nodes, including the init containers
kubectl top node --containers --containers # Display the resource usage of all nodes, including the init containers
kubectl apply -f pod.yaml # Create a pod using the data in pod.yaml
```


## Ansible
- Ansible is an open-source software provisioning, configuration management, and application-deployment tool.
- **Ansible playbook** is a YAML file that defines a set of tasks to be executed on remote hosts.
- **Ansible module** is a self-contained script that implements a single task, such as copying a file, installing a package, or making a directory.
- **Ansible role** is a set of Ansible tasks that are bundled into a single file.
- **Ansible inventory** is a file that defines the hosts that will be managed by Ansible.
- **Ansible vault** is a feature that allows sensitive data to be stored in encrypted files, rather than as plaintext in playbooks or roles.
- **Ansible Galaxy** is a free community hub that makes it easy to discover, use, and share roles created by Ansible users.`
- **Ansible Tower** is a web-based solution that makes Ansible even more easy to use for IT teams of all kinds.

### Ansible commands
```bash
ansible all -m ping # Ping all hosts
ansible all -m ping -i hosts # Ping all hosts in the hosts file
ansible all -m ping -i hosts --limit webservers # Ping all hosts in the webservers group in the hosts file`
ansible all -m ping -i hosts --limit webservers --become # Ping all hosts in the webservers group in the hosts file, using sudo
ansible all -m ping -i hosts --limit webservers --become --ask-become-pass # Ping all hosts in the webservers group in the hosts file, using sudo, and prompt for the sudo password
ansible all -m ping -i hosts --limit webservers --become --ask-become-pass --ask-pass # Ping all hosts in the webservers group in the hosts file, using sudo, and prompt for the sudo password and the SSH password
ansible-playbook playbook.yml # Run the playbook.yml playbook
ansible-playbook playbook.yml -i hosts # Run the playbook.yml playbook, using the hosts file
ansible-playbook playbook.yml -i hosts --limit webservers # Run the playbook.yml playbook, using the hosts file, and only run tasks on hosts in the webservers group
ansible-playbook playbook.yml -i hosts --limit webservers --become # Run the playbook.yml playbook, using the hosts file, and only run tasks on hosts in the webservers group, using sudo
ansible-playbook playbook.yml -i hosts --limit webservers --become --ask-become-pass # Run the playbook.yml playbook, using the hosts file, and only run tasks on hosts in the webservers group, using sudo, and prompt for the sudo password
ansible-playbook playbook.yml -i hosts --limit webservers --become --ask-become-pass --ask-pass # Run the playbook.yml playbook, using the hosts file, and only run tasks on hosts in the webservers group, using sudo, and prompt for the sudo password and the SSH password
ansible-playbook playbook.yml -i hosts --limit webservers --become --ask-become-pass --ask-pass --ask-vault-pass # Run the playbook.yml playbook, using the hosts file, and only run tasks on hosts in the webservers group, using sudo, and prompt for the sudo password, the SSH password, and the vault password
```

## Terraform
- Terraform is an open-source infrastructure as code software tool created by HashiCorp.
- **Terraform configuration** is a file written in the HashiCorp Configuration Language (HCL).
- **Terraform state** is a file that is created by Terraform after it has been used to create infrastructure.
- **Terraform module** is a self-contained collection of Terraform configurations that manages a collection of related infrastructure resources.
- **Terraform provider** is a plugin that Terraform uses to translate the API interactions with a service into a set of resource types and their data sources.
- **Terraform backend** is a remote storage service that stores the state of your infrastructure.

### Terraform commands
```bash
terraform init # Initialize a working directory containing Terraform configuration files
terraform plan # Generate and show an execution plan
terraform apply # Builds or changes infrastructure
terraform destroy # Destroy Terraform-managed infrastructure
terraform fmt # Rewrites config files to canonical format
terraform validate # Validates the Terraform files
terraform taint # Manually mark a resource for recreation
```

## Jenkins
- Jenkins is an open-source continuous integration server.
- **Jenkinsfile** is a text file that contains the definition of a Jenkins Pipeline and is checked into source control.
- **Jenkins pipeline** is a suite of plugins which supports implementing and integrating continuous delivery pipelines into Jenkins.
```
pipeline {
    agent any
    stages {
        stage('Build') {
            steps {
                echo 'Building..'
            }
        }
        stage('Test') {
            steps {
                echo 'Testing..'
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying....'
            }
        }
    }
}
```

# Microservices
- Microservices are a software development technique—a variant of the service-oriented architecture (SOA) architectural style that structures an application as a collection of loosely coupled services.
- Microservices are small, autonomous services that work together.

## Communication between microservices
- **REST** is an architectural style for providing standards between computer systems on the web, making it easier for systems to communicate with each other.
- **SOAP** is a protocol specification for exchanging structured information in the implementation of web services in computer networks.
- **gRPC** is a modern open source high performance Remote Procedure Call (RPC) framework that can run in any environment.
- **GraphQL** is a query language for APIs and a runtime for fulfilling those queries with your existing data.
- **RabbitMQ** is an open-source message-broker software that originally implemented the Advanced Message Queuing Protocol (AMQP).
- **Apache Kafka** is an open-source stream-processing software platform developed by the Apache Software Foundation, written in Scala and Java.

### RabbitMQ
- **RabbitMQ** is an open-source message-broker software that originally implemented the Advanced Message Queuing Protocol (AMQP).
- **Exchange** is a message routing agent that receives messages from producers and pushes them to queues.
- **Queue** is a buffer that stores messages.
- **Binding** is a link between an exchange and a queue.
- **Routing key** is a message attribute used for routing messages to queues.
- **Virtual host** is an abstraction of an AMQP broker.
- **Connection** is a network connection between a client and a server.
- **Channel** is a virtual connection inside a connection.
- **Message** is a data structure containing headers and a body.
- **Publisher** is a program that sends messages.
- **Consumer** is a program that receives messages.

### Apache Kafka
- **Apache Kafka** is an open-source stream-processing software platform developed by the Apache Software Foundation, written in Scala and Java.
- **Broker** is a server that stores messages.
- **Topic** is a category or feed name to which messages are published.
- **Partition** is an ordered, immutable sequence of messages that is continually appended to a log.
- **Offset** is a unique identifier of a message within a partition.
- **Producer** is a program that publishes messages to a topic.
- **Consumer** is a program that subscribes to a topic and processes the messages it receives.

## Service discovery
- **Service discovery** is the process of automatically detecting the location of services and their capabilities.
- **Consul** is a service mesh solution providing a full featured control plane with service discovery, configuration, and segmentation functionality.
- **Eureka** is a service registry for resilient mid-tier load balancing and failover.
- **ZooKeeper** is a centralized service for maintaining configuration information, naming, providing distributed synchronization, and providing group services.

## API gateway
- **API gateway** is a server that acts as the single entry point for all requests from clients to access the microservices.
- **Kong** is an open-source API gateway and microservices management layer, delivering high performance and reliability.

## Service mesh
- **Service mesh** is a dedicated infrastructure layer for handling service-to-service communication.
- **Istio** is an open-source service mesh that layers transparently onto existing distributed applications.
- **Envoy** is an open-source edge and service proxy, designed for cloud-native applications.
<!-- =========================================================================================================== -->
# Javascript
## Common terms
- Primitive data types: string, number, boolean, null, undefined, symbol
- Non-primitive data types: object, array, function
- Hoisting: JavaScript's default behavior of moving all declarations to the top of the current scope.
- Closure: A closure is the combination of a function and the lexical environment within which that function was declared.
- Scope: The current context of execution, which determines the accessibility of variables. There are two types of scope: global and local.
- IIFE: Immediately Invoked Function Expression. A common pattern for creating local scopes.
- call-stack: A stack with a LIFO (Last In, First Out) structure.
- Callback: A callback is a function passed into another function as an argument, which is then invoked inside the outer function to complete some kind of routine or action.
- Execution context: contains the code that's currently running, and everything that aids in its execution

## Call/Apply/Bind
- Call: The call() method calls a function with a given this value and arguments provided individually.
- Apply: The apply() method calls a function with a given this value, and arguments provided as an array (or an array-like object).
- Bind: The bind() method creates a new function that, when called, has its this keyword set to the provided value.


## Event loop
- Event loop: to monitor the Call Stack and the Callback Queue
- Microtask queue is handled by the JavaScript engine before it moves on to the next task in the callback queue.
- The Callback queue is handled by the JavaScript engine after it has executed all tasks in the microtask queue.


## Promise/Async/Await/Eventing
- Promise: Promises are used to handle asynchronous operations in JavaScript.
- Event delegation: Event delegation is a technique involving adding event listeners to a parent element instead of adding them to the child elements.
- Event bubbling: The event propagation from the inner element to outer elements.
- Event capturing: The event propagation from the outer element to inner elements.
- Event propagation: The process of an event being triggered on an element, and then propagating up through its ancestors in the DOM tree.
- Event propagation order: Capturing phase, target phase, bubbling phase.

# React
## Virtual DOM
- “virtual” representation of the actual DOM. It is nothing but an object created to replicate the actual DOM.
- Virtual DOM is a programming concept where an ideal, or “virtual”, representation of a UI is kept in memory and synced with the “real” DOM by a library such as ReactDOM.
- React creates an in-memory data-structure cache, computes the resulting differences, and then updates the browser's displayed DOM efficiently.
- virtual DOM is much faster, because nothing gets drawn onscreen.
- virtual DOM is cheap to create because it doesn’t write to the screen

## React hooks
- useState: The useState hook lets you add state to function components.
- useEffect: The useEffect hook lets you perform side effects in function components.
- useContext: The useContext hook lets you use context in function components.
- useReducer: The useReducer hook lets you use a reducer in function components.
- useCallback: The useCallback hook lets you use a callback in function components.
- useMemo: The useMemo hook lets you use a memoized value in function components.
- useRef: The useRef hook lets you use a ref in function components.
- useImperativeHandle: The useImperativeHandle hook lets you use imperative handle in function components.
- useLayoutEffect: The useLayoutEffect hook lets you use layout effects in function components.

## React Events
- SyntheticEvent: React wraps the browser’s native event so that the behavior across different browsers is consistent.
- Event pooling: React will reuse the same SyntheticEvent object for performance reasons.
- Event delegation: Event delegation is a technique involving adding event listeners to a parent element instead of adding them to the child elements.
- Event bubbling: The event propagation from the inner element to outer elements.

# Node.js

## what/why
- Node.js is an open-source, cross-platform, JavaScript runtime environment that executes JavaScript code outside of a browser.
- It is generally fast, non-blocking, and uses Google’s V8 JavaScript engine to execute code, everything is asynchronous, yeilds great concurrency.

## How works
- Node.js retrieves the incoming requests and adds those to the Event Queue
- requests are then passed one-by-one through the Event Loop. It checks if the requests are simple enough not to require any external resources
- The Event Loop processes simple requests (non-blocking operations), such as I/O Polling, and returns the responses to the corresponding clients
- single thread from the Thread Pool is assigned to a single complex request. This thread is responsible for completing a particular blocking request by accessing external resources, such as computation, database, file system, etc.
- Once the task is carried out completely, the response is sent to the Event Loop that sends that response back to the client.
- The Event Loop checks the Event Queue and if there is an event, it will be added to the Call Stack
- The Call Stack executes the event and removes it from the Call Stack
- The Event Loop checks the Event Queue again and if there is an event, it will be added to the Call Stack

## Common terms
- Event loop: to monitor the Call Stack and the Callback Queue
- Microtask queue is handled by the JavaScript engine before it moves on to the next task in the callback queue.
- The Callback queue is handled by the JavaScript engine after it has executed all tasks in the microtask queue.
- Event-driven programming: Event-driven programming is a programming paradigm in which the flow of the program is determined by events such as user actions (mouse clicks, key presses), sensor outputs, or messages from other programs or threads.
- Event-driven architecture: Event-driven architecture is a software architecture pattern that focuses on the flow of data between software components.# Computer Network

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


<!-- =========================================================================================================== -->
# OOP
## OOP principles
- Encapsulation: The bundling of data with the methods that operate on that data, or the restricting of direct access to some of an object's components.
- Abstraction: The process of hiding the implementation details from the user, only the functionality will be provided to the user.
- Inheritance: The transfer of the characteristics of a class to other classes that are derived from it.
- Polymorphism: The provision of a single interface to entities of different types or the use of a single symbol to represent multiple different types.

## SOLID
- Single responsibility principle: A class should have one and only one reason to change, meaning that a class should have only one job.
- Open-closed principle: Objects or entities should be open for extension, but closed for modification.
- Liskov substitution principle: Objects in a program should be replaceable with instances of their subtypes without altering the correctness of that program.
- Interface segregation principle:  keeping things separated, and the Interface Segregation Principle is about separating the interfaces.
- Dependency inversion principle:  classes should depend upon interfaces or abstract classes instead of concrete classes and functions.

## Design patterns
### Creational patterns
- Abstract factory: Provides an interface for creating families of related or dependent objects without specifying their concrete classes.
- Builder: Separates object construction from its representation.
- Factory method: Creates an instance of several derived classes.
- Prototype: A fully initialized instance to be copied or cloned.
- Singleton: A class of which only a single instance can exist.

### Structural patterns
- Adapter: Match interfaces of different classes.
- Bridge: Separates an object’s interface from its implementation.
- Composite: A tree structure of simple and composite objects.
- Decorator: Add responsibilities to objects dynamically.
- Facade: A single class that represents an entire subsystem.
- Flyweight: A fine-grained instance used for efficient sharing.
- Proxy: An object representing another object.
  
### Behavioral patterns
- Chain of responsibility: A way of passing a request between a chain of objects.
- Command: Encapsulate a command request as an object.
- Interpreter: A way to include language elements in a program.
- Iterator: Sequentially access the elements of a collection.


<!-- =========================================================================================================== -->
# Operating System
## Process
- A process is an instance of a computer program that is being executed.

## Thread
- A thread is a unit of CPU utilization. It is the smallest sequence of programmed instructions that can be managed independently by a scheduler, which is typically a part of the operating system.

## Context switching
- Context switching is the process of saving the state of a process or thread that is being preempted so that it can be restored and execution can resume from the exact same point at a later time.

## Deadlock
- A deadlock occurs when two or more processes are blocked because each process is holding a resource and waiting for another resource acquired by some other process.

## Concurrence vs Parallelism
- Concurrency is the composition of independently executing processes, while parallelism is the simultaneous execution of (possibly related) computations.
- Concurrency is about dealing with lots of things at once. Parallelism is about doing lots of things at once.

