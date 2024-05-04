# Sorting

A sorting algorithm takes as input a sequence of `n` numbers (a<sub>1</sub>, a<sub>2</sub>, ..., a<sub>n</sub>) and produces as output a permutation or reordering (a'<sub>1</sub>, a'<sub>2</sub>, ..., a'<sub>n</sub>) of the sequence, such that a'<sub>1</sub> <= a'<sub>2</sub> <= ... <= a'<sub>n</sub>.

There are plenty of sorting algorithms out there, which vary in time and space complexity. Some are more efficient than others when dealing with small sequences, others are vastly superior with longer sequences. Below, there are a couple of them. 

1. Insertion Sort

## Insertion Sort

This one compares every number of a sequence, starting from the second number, with all the numbers in a sub-sequence composed by the numbers that came before it. If the number it is being compared to is lesser than or equal to it, the numbers are rearranged so that it is positioned where it is supposed, else it is positioned at either the end or the start of the sequence. 

Here's an example implementation in C:
```c
void insertion_sort(int arr[], int length)
{
    for (int i = 1; i < length; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
```
Check out a working implementation [here!](insertion_sort.c)

Notice that there are nested loops. This algorithm, in time-complexity, is n^2. It is only more efficient than other sorting algorithms like merge sort when dealing with _very small_ sequences.
