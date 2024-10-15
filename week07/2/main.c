#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a,int b) {
    int sum;
    sum= a+b;
    return sum;
}

int square(int n){
	return(n*n);
}

int get_max(int x, int y){
	if(x>y)
	   return x;
	else
	   return y;
}

int main(int argc, char *argv[]) {
	int a, b;
	int res_sum,res_square,res_get_max;
    
    printf("Enter the integers: ");
    scanf("%i %i",&a,&b);
	res_sum=sumTwo(a,b);
    res_square=square(a);
    res_get_max=get_max(a,b);
    printf("Result - Sum: %i, Square: %i, Max: %i",res_sum,res_square,res_get_max);

	return 0;
}
