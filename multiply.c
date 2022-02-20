#include <stdio.h>
#include <stdlib.h>

int multiply (int a,int b){
	static int product =0,i=0;
	if(i<a){
		product=product+b;
		i++;
		multiply(a,b);
	}
	return product;
}

int main() {
	
	int a,b,product;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	product=multiply(a,b);
	
	printf("%d",product);
	
	return 0;
}
