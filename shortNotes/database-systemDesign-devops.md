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