/*
52327 Accepted
*/
#include <stdio.h>
int isEven(int num);
void bubble(int *sort,int count);
int main()
{
   int input[10];

   //read the input from keyboard
    for (int i = 0 ; i < 10; i++)
    {
      scanf("%d", &input[i]);
    }
    
   bubble(input, 10);
   
   //output the result
    for (int i = 0 ; i < 10; i++)
    {
      printf("%d ", input[i]);
    }
}

// distinguish the odd or even
int isEven(int num)
{
	if(num%2==0)
		return 1;
	else
		return 0;
}

// bubble sort the even number
void bubble(int* sort, int count)
{
    int i,j,temp;
    for(i=0;i<count-1;i++){

      if(isEven(sort[i])==1){
    	
        for(j=i+1;j<count;j++)
        {
          if(isEven(sort[j])==1)
          {
    		    if(sort[i]>sort[j])
    		    {
    			     temp=sort[i];
    			     sort[i]=sort[j];
    			     sort[j]=temp;
    		    }
          }
        }
      }
    }
  }

