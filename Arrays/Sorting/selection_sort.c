#include <stdio.h>
#include <stdlib.h>

// Selection Sort in C language

void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", a[i]);
    }
    printf("\n");
}

//Selection Sort Function
void SelectionSort(int *a, int n)
{
    int index_min;
    int temp;
    for (int i = 0; i < n - 1; i++)                 //Loop for passes
    {                                   
        index_min = i;
        for (int j = i + 1; j < n; j++)
        {                                           //Loop for each pass
            if (a[j] < a[index_min])
            {
                index_min = j;
            }
        }
        //Swap A[i] and A[index_min]
        temp = a[i];
        a[i] = a[index_min];
        a[index_min] = temp;
    }
}

// Time Complexity of this function  is O(n^2)

int main()
{
    int a[5] = {3, 5, 2, 13, 2};
    display(a, 5); // Printing array
    SelectionSort(a, 5);
    display(a, 5); // Printing array
    return 0;
}