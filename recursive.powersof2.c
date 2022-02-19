#include <stdio.h>
#include <stdlib.h>

int powersoftwo(int x){
	
	int y;
	if(x==0){
		y=1;
	}
	else{
		y=2*powersoftwo(x-1);
	}
	
	printf("%d\n",y);
	return y;
	
}
int main() {
	
	int n;
	printf("Enter number\n");
	scanf("%d",&n);
	
	powersoftwo(n);
	
	return 0;
}
