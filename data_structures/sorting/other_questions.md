1. What is the time complexity of heap sort? What is the drawback of heap sort? [3 pt]
Time complexity of heap sort is O(n log n) - worst case
scenario. 

Disadvantage of heap sort is that it is an unstable sorting algorithm which means that it does not maintain the relative order of items - it might rearrange the order of items when there are two same elements. 

4. In general, heap sort is not as efficient as merge sort. Can you explain why? [3 pt]
This might be because of the cases when the input array is nearly sorted or sorted and the worst-case time complexity of heap sort can be O(n^2) while merge sort guaranteed that O(n log n) is going to be the worst-case time complexity for any input. 