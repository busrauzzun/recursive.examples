#include <stdio.h>
#include <stdlib.h>


void serie (int x,int y,int z){
	if(x<=y){
		printf("%d\n",x);
		serie(x+z,y,z);
	}
}

int main() {
	int a,b,n;         
	printf("Enter initial value\n");
	scanf("%d",&a);
	printf("Enter end value\n");
	scanf("%d",&b);
	printf("Enter increment value\n");
	scanf("%d",&n);


	serie(a,b,n);
	
	return 0;
}
