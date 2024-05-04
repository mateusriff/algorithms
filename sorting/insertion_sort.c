#include <stdio.h>

void print_array(int arr[], int length)
{
    printf("[");
    for (int i = 0; i < length; i++) {
        printf("%d", arr[i]);
        if(i != length - 1 ) printf(", ");
    }
    printf("]\n");
}


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

int main()
{
    int arr[3] = {2,3,1};
    print_array(arr, 3);
    insertion_sort(arr, 3);
    print_array(arr, 3);
}