#include <stdio.h>
#include <stdlib.h>

//Insertion Sort in C language

void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", a[i]);
    }
    printf("\n");
}

//Insertion Sort Function
void InsertionSort(int *a, int n)
{
    //Loop for passes
    int k, j;
    for (int i = 1; i <= n - 1; i++)
    {
        //Loop for each pass
        k = a[i];
        j = i - 1;
        while (a[j] > k && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = k;
    }
}

// Time Complexity of this function is O(n^2)

int main()
{
    int a[5] = {1, 3, 2, 11, 7};
    display(a, 5); // Printing array
    InsertionSort(a, 5);
    display(a, 5); // Printing array
    return 0;
}