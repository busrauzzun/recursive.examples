#include <stdio.h>
#include <stdlib.h>


int division (int x,int y){
	if(x-y==0){
		return 1;
	}
	else if(x<y){
		return 0;
	}
	else {
		return (1+division(x-y,y));
	}

}
int main() {
	
	int n,d;
	printf("Enter number.");
	scanf("%d\n",&n);
	
	printf("Enter divisor");
	scanf("%d\n",&d);
	
	printf("The quotient=%d\n",division(n,d));
	printf("The remainder= %d\n",n-(division(n,d)*d));
	
	return 0;
}
