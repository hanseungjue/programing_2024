#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int get_integer(){
	int n;
	printf("Enter the value: ");
	scanf("%d",&n);
	return n; 
}	

int factorial(int n)
{
	int i;
	int res=1;
	for (i=1;i<n+1;i++)
	    res=res*i;
	return res;
}

int combination(int n, int r)
{
	int a,b,c;   
	a=factorial(n);
	b=factorial(n-r);
	c=factorial(r);
	return(a/(b*c));
}	

int main(void) {
	int n,r,x;
	n=get_integer();
	r=get_integer();
	x=combination(n,r);
	printf("The result of C(%i, %i) is %i.",n,r,x);
	return 0;
}
