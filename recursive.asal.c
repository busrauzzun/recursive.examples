#include <stdio.h>
#include <stdlib.h>

/* Klavyeden girilen bir N pozitif tamsayýsýna kadar olan asal sayýlarýn ekrana listelenmesini saðlayan C programýný 
recursive fonksiyon yardýmýyla yazýnýz.*/

int asal (int x,int y){
	int j;
	if(y==1){
		return 1;
	}
	else if(x%y==0){
		return 0;
	}
	else {
		asal(x,y-1);
	}
}
int main() {
	int n,i,control;
	printf ("Enter number.\n");
	scanf ("%d",&n);
	for(i=2;i<=n;i++){
		control=asal(i,i/2);
		if(control==1){
			printf("%d\n",i);
		}
	}
	
	return 0;
}
