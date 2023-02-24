# Memory management

Stack and Heap

https://www.youtube.com/watch?v=_8-ht2AKyH4


Stack overflow 
- stack allocates memory before program execution - cannot grow during runtime
- that's why dynamic arrays are in heap
- calls stack on top of each other and get executed one by one, they return then next one is called
- stack overflow happens when there are too many calls maybe because of a loop and the system runs out of stack memory during run time

- heap can dynamically grow and allocates memory of necesarry

CPP is a superset of C - backward compatibility