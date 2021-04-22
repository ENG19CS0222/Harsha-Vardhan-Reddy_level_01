//WAP to find the sum of two fractions.

#include <stdio.h>
typedef struct
{
	int numerator;
	int denominator;
}fraction;

void input_fraction(fraction * f1, fraction * f2)
{
	printf("Enter the numerator and Denominator of fraction 1: ");
	scanf("%d%d",&f1->numerator, &f1->Denominator);
	printf("Enter the numerator and Denominator of fraction 2: ");
	scanf("%d%d", &f2->numerator , &f2->Denominator);
}

fraction compute_fraction(fraction f1, fraction f2)
{
	fraction n_d = {f1.numerator*f2.denominator + f2.numerator*f2.denominator, f1.denominator*f2.denominator};
	int gcd;
	gcd = find_gcd(n_d.numerator , n_d.denominator);
	n_d.numerator = n_d.denominator/gcd;
	n_d.denominator = n_d.denominator/gcd;
	return n_d;
}

int find_gcd(int a, int b)
{
	while  (a  !=  b)
	{
		if  (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}

void output_fraction(fraction f1, fraction f2, fraction n_d)
{
	printf(" %d%d + %d%d = %d%d " , f1.numerator,f1.denominator,f2.numerator,f2.denominator,n_d.numerator,n_d.denominator);
}

int main()
{
	fraction f1,f2,n_d;
	input_fraction(&f1,&f2);
	n_d = compute_fraction(f1,f2);
	output_fraction(f1,f2,n_d);
	return 0;
}
