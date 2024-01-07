# Data Structures & Algorithms in C++

Welcome to my collection of data structures and algorithms. This repository is a showcase of various data structures I've explored and implemented, each playing a crucial role in efficient data management and manipulation.

<h2>Table of Contents</h2>
<ol>
    <li><a href="#linear-data-structures">Linear Data Structures</a></li>
    <li><a href="#non-linear-data-structures">Non-Linear Data Structures</a></li>
    <li><a href="#queue-based-data-structures">Queue-Based Data Structures</a></li>
    <li><a href="#sorting-algorithms-complexity">Sorting Algorithms Complexity</a></li>
</ol>

<h2 id="linear-data-structures">Linear Data Structures</h2>

<h3>Array</h3>
<p><strong>Description:</strong> A collection of items stored at contiguous memory locations. Arrays are fixed in size and allow random access to elements.</p>

<h3>Circular Array</h3>
<p><strong>Description:</strong> An array where the end is connected back to the start, forming a circle, often used in implementing circular queues.</p>
<!-- Replace with your image or code snippet -->
<img src="link_to_circular_array_image_or_code.png" alt="Circular Array" />

<h3>Singly Linked List</h3>
<p><strong>Description:</strong> A list where each node contains data and a pointer to the next node in the sequence.</p>

<h3>Doubly Linked List</h3>
<p><strong>Description:</strong> Similar to a singly linked list, but each node has two references: one to the next node and one to the previous.</p>
<!-- Replace with your image or code snippet -->
<img src="link_to_doubly_linked_list_image_or_code.png" alt="Doubly Linked List" />

<h2 id="non-linear-data-structures">Non-Linear Data Structures</h2>

<h3>Binary Tree</h3>
<p><strong>Description:</strong> A tree data structure where each node has at most two children, often used for efficient searching and sorting.</p>

<h2 id="queue-based-data-structures">Queue-Based Data Structures</h2>

<h3>Queue</h3>
<p><strong>Description:</strong> A linear collection that follows a First In First Out (FIFO) order.</p>
<!-- Replace with your image or code snippet -->
<img src="link_to_queue_image_or_code.png" alt="Queue" />

<h3>Priority Queue</h3>
<p><strong>Description:</strong> Similar to a regular queue, but each element has a priority associated with it. Higher priority elements are dequeed first.</p>

<h3>Dequeue (Double-Ended Queue)</h3>
<p><strong>Description:</strong> An abstract data type that generalizes a queue, allowing insertion and deletion at both ends.</p>
<!-- Replace with your image or code snippet -->
<img src="link_to_dequeue_image_or_code.png" alt="Dequeue" />

<h3>Circular Linked List</h3>
<p><strong>Description:</strong> A linked list where the last node points to the first node, forming a circle.</p>
<!-- Replace with your image or code snippet -->
<img src="link_to_circular_linked_list_image_or_code.png" alt="Circular Linked List" />

<h3>Singly Linked List Queue</h3>
<p><strong>Description:</strong> A queue implementation using a singly linked list, allowing FIFO operation.</p>

## Sorting Algorithms Complexity

The following table summarizes the time and space complexities of various sorting algorithms that have been implemented in this repository:

| Algorithm        | Best Time Complexity | Average Time Complexity | Worst Time Complexity | Space Complexity | Stable |
|------------------|----------------------|-------------------------|-----------------------|------------------|--------|
| Bubble Sort      | O(n)                 | O(n^2)                  | O(n^2)                | O(1)             | Yes    |
| Heap Sort        | O(n log n)           | O(n log n)              | O(n log n)            | O(1)             | No     |
| Insertion Sort   | O(n)                 | O(n^2)                  | O(n^2)                | O(1)             | Yes    |
| Quick Sort       | O(n log n)           | O(n log n)              | O(n^2)                | O(log n)         | No     |
| Selection Sort   | O(n^2)               | O(n^2)                  | O(n^2)                | O(1)             | No     |
| Merge Sort       | O(n log n)           | O(n log n)              | O(n log n)            | O(n)             | Yes    |
| Binary Tree Sort | O(n log n)           | O(n log n)              | O(n^2)                | O(n)             | Yes    |

*Note: "Stable" indicates whether the sorting algorithm maintains the relative order of equal elements. The worst-case time complexity of Binary Tree Sort depends on the structure of the binary tree formed, which is O(n^2) when the tree becomes a linear chain (degenerate tree).* 