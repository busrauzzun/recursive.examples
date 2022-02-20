#include <stdio.h>
#include <stdlib.h>


int factorial(int x){
	if(x==1){
		return 1;
	}
	else{
		return (x*factorial(x-1));
	}
}




int main() {
	int n;
	printf("Enter number \n");
	scanf("%d",&n);
	printf("%d",factorial(n));
	
	return 0;
}
