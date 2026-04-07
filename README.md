# C - Binary Trees

## 📝 Description
This project is an introduction to the implementation and manipulation of **Binary Trees** in C. It explores the logic behind hierarchical data structures, their traversal methods, and their performance advantages over linear structures like linked lists.

---

## 🎯 Learning Objectives
By the end of this project, you should be able to explain the following without the help of Google:
* **Binary Trees**: What they are and how they are structured.
* **BST vs Binary Tree**: The specific properties that define a Binary Search Tree.
* **Efficiency**: The gains in time complexity compared to linked lists.
* **Metrics**: How to calculate the **depth**, **height**, and **size** of a tree.
* **Traversals**: Methods to navigate through a tree (Pre-order, In-order, Post-order).
* **Tree Types**: Definitions of **Full**, **Complete**, **Perfect**, and **Balanced** binary trees.

---

## 🛠️ Requirements

### General
* **Editors**: `vi`, `vim`, `emacs`.
* **OS**: Compiled on **Ubuntu 20.04 LTS**.
* **Compiler**: `gcc` using the flags `-Wall -Werror -Wextra -pedantic -std=gnu89`.
* **Coding Style**: Must follow the **Betty style** (checked with `betty-style.pl` and `betty-doc.pl`).
* **Constraints**:
    * No global variables.
    * No more than 5 functions per file.
    * Prototypes must be included in the header file `binary_trees.h`.
    * All header files must be **include guarded**.

### GitHub
* One project repository per group.
* Do not fork or clone an existing repository with the same name to avoid a 0% score.

---

## 📊 Data Structures
The following structures and types are used for this project:

### Basic Binary Tree
```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
