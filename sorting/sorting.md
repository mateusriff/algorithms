# Sorting

A sorting algorithm takes as input a sequence of `n` numbers (a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub>) and produces as output a permutation or reordering (a'<sub>1</sub>, a'<sub>2</sub>, ..., a'<sub>n</sub>) of the sequence, such that a'<sub>1</sub> <= a'<sub>2</sub> <= ... <= a'<sub>n</sub> (in increasing fashion) or a'<sub>1</sub> >= a'<sub>2</sub> >= ... >= a'<sub>n</sub> (decreasing fashion).

There are plenty of sorting algorithms out there, which vary in time and space complexity. Some are more efficient than others when dealing with very small sequences, others are vastly superior with longer sequences. Below, there are a couple of them:

1. [Insertion Sort](#insertion-sort)

## Insertion Sort {#insertion-sort}

This one compares every number `x` of a sequence, starting from the second number, with all the numbers in a sub-sequence composed by the numbers that came before it. It shifts the position of each number to "make room" for `x`, if necessary.

Here's an example implementation in C with a function that sorts a sequence (array) in increasing order with Insertion Sort:
```c
void insertion_sort(int arr[], int length)
{
    for (int i = 1; i < length; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) { // to make it sort in decreasing order, replace second operator by '<'
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
```
Check out a working implementation [here](insertion_sort.c).

This algorith is n<sup>2</sup> in time-complexity. Despite this, it can be more efficient than other sorting algorithms like Merge Sort, but only when sorting _very small_ sequences. We can see that in Figure 1., which compares the time-complexity of Insertion Sort with Merge Sort and Binary Sort. Notice how for a smaller input sizes (the size of the sequence or array), Insertion Sort outperforms Merge Sort.

**Figure 1.**

![image](https://github.com/mateusriff/algorithms/assets/105450782/c1fc16ac-a6fd-4b11-aa6a-b3cbdff0651b)

