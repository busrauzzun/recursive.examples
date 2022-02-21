#include <stdio.h>
#include <stdlib.h>


void hanoi(int k,char x,char y,char z){
	if(k<1){
		printf("There is no disc in this pole");
	}
	else if (k==1){
		printf("%c --> %c move\n",x,y);
	}
	else{
		hanoi(k-1,x,z,y);
		printf("%c --> %c move\n",x,y);
		hanoi(k-1,z,y,x);
	}
		
}


int main() {
	int n;
	char a,b,c;
	printf("Enter discs number\n");
	scanf("%d",&n);
	
	hanoi(n,'a','b','c');
	
	return 0;
}
