//linear search looks at each item in the list, one at a time, from beginning to end
For i from 0 to n–1
    If i'th element is 50
        Return true
Return false

//binary search is dividing the problem in two each step (list needs to be sorted)
If no items
    Return false
If middle item is 50
    Return true
Else if 50 < middle item
    Search left half
Else if 50 > middle item
    Search right half

//bubble sort is where large values get shifted to the right
Repeat until no swaps
    For i from 0 to n–2
        If i'th and i+1'th elements out of order
            Swap them

//selection sort is swapping the smallest number in the list with the first value
For i from 0 to n–1
    Find smallest item between i'th item and last item
    Swap smallest item with i'th item
n + (n – 1) + (n – 2) + ... + 1
n(n + 1)/2
(n^2 + n)/2
n^2/2 + n/2
O(n^2)

//insertion sort is shifting elements out of the way to make room as you go
Call the first element of the array "sorted"
Repeat until all the elements are sorted:
    Look at the next unsorted element. Insert into the "sorted"
    portion by shifting the requisite number of elements

//merge sort keeps halving the list and orders them by the end
If only one item
  Return
Else
    Sort left half of items
    Sort right half of items
    Merge sorted halves

//big O notation is the worst-case scenario
O(n2)
bubble sort, selection sort, insertion sort
O(n log n)
merge sort
O(n)
linear search
O(log n)
binary search
O(1)

//big Omega notation is the best-case scenario
Ω(n2)
selection sort
Ω(n log n)
merge sort
Ω(n)
bubble sort, insertion sort
Ω(log n)
Ω(1)
linear search, binary search

//Θ, Theta, which we use to describe running times of algorithms if the upper bound and lower bound is the same