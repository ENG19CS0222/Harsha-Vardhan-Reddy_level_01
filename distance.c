//WAP to find the distance between two point using 4 functions.

#include <stdio.h>
#include<math.h>
void output(float d)
{
   printf("the distance between 2 points is:%f",d):
}
void dist(float x1,float y1,float x2,float y2)
{
   float dist;
   dist = ((x2-x1)(x2-x1)+(y2-y1)(y2-y1));
   dist(dist);
}
void output()
{
   float x1,y1,x2,y2;
   printf("enter the values of x1 and y1:");
   scanf("%f%f",&x1,&y1);
   printf("enter the values of x2 and y2:");
   scanf("%f%f",&x2,&y2);
   dist(x1,y1,x2,y2);
}
int main()
{
   input();
   return 0;
}
