//Write a program to find the sum of n different numbers using 4 functions

#include <stdio.h>
int input()
{
    int n;
    printf("Enter the no.of elements:");
    scanf("%d",&n);
    return n;
}
int Sum(int s)
{
    int i,sum=0,num;

    for(i=1;i<=s;i++)
    {
     printf("Enter the number %d to add:",i);
     scanf("%d",&num);
     sum=sum+num;
    }
    return sum;
}
void Output(int s,int A)
{
    printf("Sum of the %d numbers is %d",s,A);
}
int main()
{
    int s,A;
    s=input();
    A=Sum(s);
    Output(s,A);
    return 0;
}
