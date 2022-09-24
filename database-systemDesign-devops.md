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


