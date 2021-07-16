#include <stdio.h>
#include <stdlib.h>

void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", a[i]);
    }
    printf("\n");
}

int partition(int *a, int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);

    //Swap a[low] and a[j]
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;
}

void Quicksort(int *a, int low, int high)
{
    int partitionindex; //Index of pivot after partition
    if (low < high)
    {
        partitionindex = partition(a, low, high); // Partition function called
        Quicksort(a, low, partitionindex - 1);    //Used recursion to sort left subarray
        Quicksort(a, partitionindex + 1, high);   //Used recursion to sort right subarray
    }
}

int main()
{
    int a[10] = {2, 4, 3, 9, 1, 4, 8, 7, 5, 6};
    display(a, 10);     // Printing array
    Quicksort(a, 0, 9); // Calling the Quicksort function
    display(a, 10);     // Printing array
    return 0;
}
