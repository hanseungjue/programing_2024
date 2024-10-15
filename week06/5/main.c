#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	char i;
	int c;
	
	printf("Enter the calculation: ");
	scanf("%d %c %d",&a,&i,&b);
	
	if(i=='+')
	   c=a+b;
	else if(i=='-')
	   c=a-b;
	else if(i=='*')
	   c=a*b;
	else
	   c=a/b;
	
	printf("= %i",c); 
	return 0;
}
