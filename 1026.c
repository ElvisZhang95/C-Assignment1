/*
52509 Accepted
*/
#include <stdio.h>
int main()
{   

	//create array for storing string
	char input[100];
	char c;
	int i,j;

	//read input from keyboard
	scanf("%c",&c);
	scanf("%s",input);

	//check every elements in the array
	for(i=j=0;i<100;i++){
    if(input[i]!=c){

      // not the specific character, copy to the array
      input[j++]=input[i];
    	}
    else{

    	// set the element as null
    	input[j]=0;
    }
	}
    printf("%s", input);
	
	return 0;
}