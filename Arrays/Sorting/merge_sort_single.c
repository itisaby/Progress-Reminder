#include <stdio.h>
#include <stdlib.h>

//Sorting an array using merge sort algorithm

void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", a[i]);
    }
    printf("\n");
}

void Merge(int a[], int low, int mid, int high)
{
    int i;
    i = low;
    int j;
    j = mid + 1;
    int k;
    k = low;
    int b[100];
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        b[k] = a[i];
        i++;
        k++;
    }

    while (j <= high)
    {
        b[k] = a[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}

void Mergesort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        Mergesort(a, low, mid);
        Mergesort(a, mid + 1, high);
        Merge(a, low, mid, high);
    }
}

int main()
{
    int a[10] = {2, 4, 3, 9, 1, 4, 8, 7, 5, 6};
    display(a, 10);     // Printing array
    Mergesort(a, 0, 9); // Calling the Mergesort function
    display(a, 10);     // Printing array
    return 0;
}
