#Hash Tables

## Description
This repository contains a series of tasks related to hash tables in low-level programming. Each task focuses on a specific aspect of hash table implementation, including creating a hash table, implementing a hash function, and performing various operations on the hash table.

## Tasks

1. **Create a Hash Table**
   - File: `0-hash_table_create.c`
   - Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
   - Description: Write a function that creates a hash table of a given size.

2. **Implement the djb2 Hash Function**
   - File: `1-djb2.c`
   - Prototype: `unsigned long int hash_djb2(const unsigned char *str);`
   - Description: Write a hash function implementing the djb2 algorithm.

3. **Get Index of a Key**
   - File: `2-key_index.c`
   - Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
   - Description: Write a function that gives you the index of a key in a hash table.

4. **Add Element to Hash Table**
   - File: `3-hash_table_set.c`
   - Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
   - Description: Write a function that adds an element to the hash table. In case of collision, add the new node at the beginning of the list.

5. **Retrieve Value by Key**
   - File: `4-hash_table_get.c`
   - Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`
   - Description: Write a function that retrieves a value associated with a key from a hash table.

6. **Print Hash Table**
   - File: `5-hash_table_print.c`
   - Prototype: `void hash_table_print(const hash_table_t *ht);`
   - Description: Write a function that prints a hash table in the order of array and list. If the hash table is NULL, don't print anything.

7. **Delete Hash Table**
   - File: `6-hash_table_delete.c`
   - Prototype: `void hash_table_delete(hash_table_t *ht);`
   - Description: Write a function that deletes a hash table, freeing all allocated memory.

## Repository Structure

- `0x1A-hash_tables/`: Directory containing all task files.
- `README.md`: Markdown file providing an overview of the repository and task descriptions.

## Dependencies

- Standard C libraries: `stdlib.h`, `string.h`, `stdio.h`
- Compilation flags: `-Wall -pedantic -Werror -Wextra -std=gnu89`
