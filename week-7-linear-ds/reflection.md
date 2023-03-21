# Linear Data Structures
- Array - contigouos memory
- Linked list - nodes containing element and a pointer to the next node
- Stack - LIFO order - pancakes
- Queue - FIFO order - line of people being served



## Linked list or dynamic array
- Singly-linked list is similar to a dynamic array, however, they have differences in terms of performance:
    - Dynamic arrays have search O(1) because it is indexed, however, inserting/deleting takes O(n) because we need to shift elements
    - Additionally, dynamic arrays, if run out of space need to copy all the    elements and put them to a new larger location (expensive location)
    - Singly-linked list have insert/delete of O(1) at any point as its nodes store a pointer and a value but the search operation requires to traverse the array because there are no ideces (expensive operation) 
    - Singly-linked list also needs to store a pointer which is additional memory req

Use of either singly-linked list or a dynamic array depends on the specific application and user-reqs.

## Linked list
- head, tail, nodes, pointers
- linked lists are used to implememnt a variety of data structures such as:
    - stack
    - queue
    - hash table

## Queue
- ADT, fifo, buffer
- implemmented using an array or a linked list
- message systems

## Stack
- ADT, LIFO, pile of plates
- implemmented using an array or a linked list
- undo-redo functionality in PCs

## Circular array
- mod operator
- bettered array