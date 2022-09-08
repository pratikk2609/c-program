#include <stdio.h>
int main()
{

    int i, n;

    int n1 = 0, n2 = 1;

    int tn = n1 + n2;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 3; i <= n; ++i)
    {
        n1 = n2;
        n2 = tn;
        tn = n1 + n2;
    }
    printf("%d ", tn);
    return 0;
}