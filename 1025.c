/*
52317 Accepted
*/
#include <stdio.h>
int gcd(int a, int b);
int lmc(int a, int b);
int main()
{
	int a,b;

	//read input from the keyboard
	scanf("%d", &a);
	scanf("%d", &b);

	//two variable for storing the result of gcd and lcm
	int gcdr,lcmr;
	gcdr=gcd(a,b);
	lcmr=lcm(a,b);
	printf("%d %d", gcdr, lcmr);
	return 0;
}

/*
formula
gcd(a, a)=a;
gcd(a, b)=gcd(a-b, b) if a>b;
gcd(a, b)=gcd(a, b-a) if a<b;
*/
int gcd(int a, int b)
{
	if(a==b)
	 return a;
	else if(a>b)
		return gcd(a-b,b);
	else
		return gcd(a,b-a);
}

/*
formula
lcm(a, b)=|a*b|/ gcd(a, b);
*/
int lcm(int a, int b)
{
	int num;
	num=a*b;
	return num/gcd(a,b);
}