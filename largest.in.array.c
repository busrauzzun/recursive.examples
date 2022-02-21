#include <stdio.h>
#include <stdlib.h>

void sort (int A[],int x){
	int j=0;
	int temp;
	for(j=0;j<x;j++){
		if(A[j]>A[j+1]){
			temp=A[j+1];
			A[j+1]=A[j];
			A[j]=temp;
		}
		
		sort(A,x-1);
	}
	
}

int main() {
	int A[100];
	int n,i;
	printf("How many numbers?\n");
	scanf("%d",&n);
	srand(time(NULL));
	for(i=0;i<n;i++){
		A[i]=rand()%100+1;	
		printf("%d\n",A[i]);
	}
	sort(A,n);
	
	for(i=0;i<n;i++){
		printf("%3d",A[i]);
	}
	return 0;
}
