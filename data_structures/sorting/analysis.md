Explain your solution clearly

- How do you come up with your solution?
My idea is to start with the bubble sort implementation, then learning what its weakness is, then improve it. I did not want to follow the ideas of selection and insertion sort as that would not be my own improvement to the bubble sort. I do not like that the bubble sort keeps iterating over the array even though the majority of the elements is already sorted and it might be sorted completely in many cases. If I implement a function to check the whole array and stop the bubble_sort from iterating, it could save some iterations, even though it does not have to if the last element is the smallest in the whole array. 

- Why do you think your solution is better than bubble sort?
I believe that in some cases it reduces the number of iterations the bubble-sort needs to do and so improves it. When I run the code we were provided, it sorts the elements, sometimes in lower but sometimes still in higher time than bubble sort. 

- Can you analyze your algorithm from the reverse pair's perspective?
Every swap in the bubble sort increases the number of reverse pairs in the array it is ordering by one. From this perspective, my_own sorting algorithm does not decrease the number of reversed pairs.
- Analyze your algorithm's time and space complexity in-depth
The algorithm swaps the actual elements using swap function and so it does not reduce neither increase the space complexity. From the persepective of time complexity the worst case scenario where the algorithm needs to iterate through the whole array and order all elements stays the same as in bubble_sort algorithm. However, the arrays that get sorted earlier in the bubble_sort process, my_own algorithm might save a couple of iterations. On the same note, the program needs to run through more if statements and lines of code every time, so its effects are spmetimes neglibile. 

# 3. Compared with merge sort, we want to use quick sort in most cases. Why? You may need to analyze the time complexity and the space complexity. [5 pt]
- We want to use quick sort in most cases because the disadvantage of merge sort is that it is not an in-place sorting algorithm meaning that it requires the user to initialize temporary variables in the heap memory. That is why merge sort requires additional space while quick sort does not and is preferred in most cases.

# 4. Please use sorting theory to explain why the quick sort is fast.[5 pt] 
- It divides the array based on a pivot point and then recursively sorts the halves one containing smaller elements and the other containing bigger or equal elements. This partitioning is done only once as all elements are compared only once against the pivot and the number of comparisons reduces in this way. It is an in-place divide and conquer method. 

# 5. Sometimes, merge sort is faster than quick sort. Please explain why. [5 pt]
- Especially with large datasets, merge sort might be the right choice because the worst time complexity of quick sort is O(n^2) which is worse than the worst time complexity of merge sort O(n*log(n)). The two reason I found are that merge sort does not require random access to elements like quick sort and that merge sort is a stable sort meaning it maintains the relative order of equal elements in the sorted list. To fix this we may want to try different pivot techniques for the quick sort (left, right, middle, average, dual pivot)