#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

float c;
float d;
float e;
d = 1.23;
e = 3.45;
float* ptrtod = &d;
float* ptrtoe = &e;

printf("\nValue of float d = %f. Address of float d = %d.", d, ptrtod);
printf("\nValue of float e = %f. Address of float e = %d.", e, ptrtoe);

c = e;
e = d;
d = c;

printf("\n\nNew value float d = %f. Address of float d = %d.", d, ptrtod);
printf("\nNew value float e = %f. Address of float e = %d.\n", e, ptrtoe);

}
