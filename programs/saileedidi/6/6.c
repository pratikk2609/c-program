#include <stdio.h>

int main()
{
   int radius;
   float area;
   printf("enter radius:");
   scanf("%d", &radius);

   area = 3.14 * radius * radius;
   printf("area is: %.2f", area);
   return 0;
}