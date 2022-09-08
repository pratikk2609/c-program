// selection sort
#include <stdio.h>
#include <conio.h>

void printList(int array[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }
}

int main()
{
    int i, j, n, min, swap;
    printf("enter the number of elements:\n");
    scnf("%d", &n);
    int array[n];
    // clrascr();

    printf("enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (array[j] < array[min])
                min = j;
        }
        if (min != i)
        {
            swap = array[i];
            array[i] = array[min];
            array[min] = swap;
        }
        printf("Array after iteration %d \n", i);
        printList(array);
    }

    printf("the sorted array:\n");
    // for (i = 0; i < n; i++)
    //     printf("%d\n", array[i]);
    printList(array);
    return 0;
}