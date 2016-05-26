/*
52325 Accepted
*/
#include <stdio.h>

int division(int a, int b, int n);
int main()
{
	int a,b,c,n;

	//read from the keyboard
	scanf("%d %d %d", &a,&b,&n);
	
	//let a is smaller than b
	if(a>b)
	{   
		c=division(a%b, b, n);
	}
	else
	{
		c=division(a, b, n);
	}
    printf("%d", c);
    return 0;
}

int division(int a, int b, int n){
	int i;
	int d,e;

	//get the reminder for n-1 times
   for(i=0;i<n-1;i++)
   {
   	 d=(a*10)%b;
   	 a=d;
   }

   // get the quotient
   e= (10*d)/b;
   return e;
}