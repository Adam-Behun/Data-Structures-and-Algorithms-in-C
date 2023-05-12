Question 1:
Definitions used to answer the questions:
- full if every node contains 0 or 2 children
- complete if all levels, except possibly the last level, contain all possible nodes and all nodes in the last level are as far left as possible
- perfect, if all internal nodes have 2 children and all leaf nodes are at the same level.

Tree 1 = Not full, not complete, not perfect
Tree 2 = Full, complete, not perfect
Tree 3 = Full tree, perfect, complete
Tree 4 = Full, not complete, not perfect

Question 2:
1. Binary tree is used for the implementation of a decision tree which is a supervised machine learning techinque used for regression and classification problems.
2. Search algorithms - Probably the most common usecase of binary trees is the search because its efficiency in time complexity O(log n)
3. File systems - each node represents a directory or a file (file explorer)
4. Database systems  - this allows for fast search and helps to handle large data volumes

Question 3:
1. Limited structure meaning that binary trees are limmited to only having two children nodes per node
2. There is the drawback of having two pointers for every node meaning that it requires some extra space
3. Another problem would be unbalanced trees where one subtree is larger (contains more elements) than the other part resulting in inefficient search operations.  

Question 4:
Part 1:
The insertion in a binary tree can be done in O(log n) and the search is done O(log n) as each node has at most two children nodes. In the worst case scenario though, the time complexity for a randomly constructed binary search tree can be O(n) - would be the same as a linked list. In the example tree provided, it would be O(n) to find 0. 

Part 2:
To improve the search efficiency of this binary tree we can construct a binary search tree which has orderding properties that help the search algorithm be more efficient. This is a specific type of a binary tree where the left subtree of a given node contains only node with keys lesser than the node's key. The right subtree of a node contains only nodes with keys greater than the given node's key. The left and right subtree must be a bst as well. This would probably be the most efficient solution for improving the search efficiency of the binary tree.