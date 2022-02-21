#include <stdio.h>
#include <stdlib.h>


void stars (int a){
	int i;
	if(a>0){
		for(i=0;i<a;i++){
			printf("*");
		}
	printf("\n");
	stars(a-1);
	}
	
}
int main() {
	
	int n;
	printf("Enter inital value\n");
	scanf("%d",&n);
	
	stars(n);
	
	
	return 0;
}
