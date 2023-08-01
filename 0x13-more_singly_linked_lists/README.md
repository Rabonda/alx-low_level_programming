# 0x13. C - More singly linked lists

# Tasks

These are all the tasks of this project, the ones that are completed link to the corresponding files.

### [0. Print list](./0-print_listint.c)
*  Write a function that prints all the elements of a listint_t list.
*  Prototype: size_t print_listint(const listint_t *h);
*  Return: the number of nodes
*  Format: see example
*  You are allowed to use printf

### [1. List lengtht](./1-list_len.c)
*  Write a function that returns the number of elements in a linked list_t list.
  - Prototype: size_t list_len(const list_t *h);

### [2. Add node](./2-add_node.c)
*  Write a function that adds a new node at the beginning of a list_t list.
  - Prototype: list_t *add_node(list_t **head, const char *str);
  - Return: the address of the new element, or NULL if it failed
  - str needs to be duplicated
  - You are allowed to use strdup

### [3. Add node at the end](./3-add_node_end.c)
*  Write a function that adds a new node at the end of a list_t list.
  - Prototype: list_t *add_node_end(list_t **head, const char *str);
  - Return: the address of the new element, or NULL if it failed
  - str needs to be duplicated
  - You are allowed to use strdup

### [4. Free list](./4-free_list.c)
* Write a function that frees a list_t list.
- Prototype: void free_list(list_t *head);
---

### Author
* **Bongani Rabonda** - [rabonda@gmail.com](https://github.com/rabonda)