#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//Sorting an array using merge sort algorithm

void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", a[i]);
    }
    printf("\n");
}

//Maximum of an array
int Maximum(int a[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
void Countsort(int a[], int n)
{
    int i, j;
    int max = Maximum(a, n);

    //Creating the count array
    int *count = (int *)malloc((max + 1) * sizeof(int));

    for (int i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    // Increament the corresponding index in the count array
    for (i = 0; i < n; i++)
    {
        count[a[i]] = count[a[i]] + 1;
    }
    i = 0; //Counter for the count array
    j = 0; //Counter for the given array

    while (i <= max)
    {
        if (count[i] > 0)
        {
            a[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int a[9] = {2, 4, 3, 1, 4, 8, 7, 5, 4};
    display(a, 9);   // Printing array
    Countsort(a, 9); // Calling the Mergesort function
    display(a, 9);   // Printing array

    return 0;
}
