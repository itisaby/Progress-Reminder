#include <stdio.h>
#include <stdlib.h>

//Merging two sorted arrays in a single array
//(Some issues need to be fixed , will check after sometime )
void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", a[i]);
    }
    printf("\n");
}

void Mergesort(int a[], int b[], int m, int n)
{
    int c[100];
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;

    while (i <= m && j <= n)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }

    while (i < m)
    { //Copying all remaining elements from A to C
        c[k] = a[i];
        k++;
        i++;
    }

    while (j < n)
    { //Copying all remaining elements from B to C
        c[k] = b[j];
        k++;
        j++;
    }
    display(c, k);
}

int main()
{
    int a[4] = {2, 4, 3, 9};
    int b[6] = {1, 4, 8, 7, 5, 6};
    display(a, 4);         // Printing array
    display(b, 6);         // Printing array
    Mergesort(a, b, 4, 6); // Calling the Quicksort function
    return 0;
}