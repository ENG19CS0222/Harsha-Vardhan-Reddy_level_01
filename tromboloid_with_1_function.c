//Write a program to find the volume of a tromboloid using one function

#include <stdio.h>
void main()
{
  float h,d,b;
  float volume_of_tromboloid;
  printf("enter the values of h,b,d:");
  scanf("%f%f%f",&h,&d,&b);
  volume_of_tromboloid = (((h*d*b)+(d/b))/3);
  printf("volume of tromboloid is %f",volume_of_tromboloid);
}
