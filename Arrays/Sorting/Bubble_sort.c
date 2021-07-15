#include <stdio.h>
#include <stdlib.h>

// Bubble Sort in C language

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", a[i]);
    }
    printf("\n");
}

// BubbleSort Function
void BubbleSort(int a[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {                                          
        // for number of passes
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
// The time complexity of this algorithm is O(n^2)

void BubbleSortOptimised(int a[], int n)
{
    int temp;
    int isSort = 0;
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d, no. of passes \n", i + 1); // for number of passes
        isSort = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                isSort = 0;
            }
            if (isSort)
            {
                return;
            }
        }
    }
}
// By using this above method, Time Complexity can be reduced to O(n)

int main()
{
    // int a[6] = {7, 11, 9, 2, 17, 4};
    int a[6] = {1, 2, 3, 4, 5, 6};
    display(a, 6);             //Printing array before sorting
    BubbleSort(a, 6);          // Function to sort the array
    BubbleSortOptimised(a, 6); // Function to sort the array in optimised way
    display(a, 6);             // Printing array after sorting

    return 0;
}