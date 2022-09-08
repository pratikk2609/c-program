// bubble sort- If the given array has to be sorted in ascending order,
// then bubble sort will start by comparing the first element of the array with the second element,
// if the first element is greater than the second element,
// it will swap both the elements, and then move on to compare the second and the third element, and so on.

#include <stdio.h>

int main()
{
    int n, j, i, swap;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap = array[j];
                array[j] = array[j + 1];
                array[j + 1] = swap;
            }
        }
    }

    printf("Sorted list in ascending order:\n");

    for (i = 0; i < n; i++)
        printf("%d\n", array[i]);
    return 0;
}