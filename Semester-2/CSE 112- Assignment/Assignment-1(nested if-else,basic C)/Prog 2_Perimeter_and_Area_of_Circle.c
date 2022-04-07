#include<stdio.h>
#define PI 3.1416
int main()
{
  int radious;
  float perimeter,area;
  radious=6;
  perimeter=2*PI*radious;
  printf("Perimeter of the circle=%f inches\n",perimeter);
  area=PI*radious*radious;
  printf("\nArea of the circle=%f inches\n",area);

  return 0;
}
