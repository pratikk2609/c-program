#include <stdio.h>
// area of circle
// float for accurate value

int main()
{
   int radius;
   float area;
   printf("enter radius:");
   scanf("%d", &radius);

   area = 3.14 * radius * radius;
   printf("area is: %f", area);
   return 0;
}