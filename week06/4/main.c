#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum=0;
	int x;
	int i;
	
	printf("Enter a number: ");
	scanf("%d",&x);	
	
	for(i=0;i<x+1;i++)
	    sum=sum+i; 
	    
	printf("The result is %i",sum);	
	return 0;
}
