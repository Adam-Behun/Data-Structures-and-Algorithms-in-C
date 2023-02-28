- last-in-first-out
- Stack is an ADT in which items are only inserted or removed from the top of a stack. Stacks can be implemented using a linked list, an array, or a vector

- Push(stack, x) --> inserts an item on the top of the stack
- Pop(stack) --> removes and returns the item at the top of the stack
- Peek(stack) --> returns but does not remove item at top of stack
- IsEmpty(stack) --> returns true if stack has no items
- GetLength(stack) --> returns the number of items in the stack


Stacks using linked lists
- push is performed by creating a new list node, assigning the node's data with the item, and prepending the node to the list
- pop is performed by assigning a local variable with the head node's data, removing the head node from the list, and then returning the local variable