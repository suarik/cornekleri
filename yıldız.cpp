#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() {
	int adet=7,bosluk=1;
	int adet1=1,bosluk1=7;
	
	for(int i=0;i<8;i++){
		
		for(int j=0; j<bosluk;j++)
		printf(" ");
		for(int t=0;t<adet;t++)
		printf("*");
		
		adet --;
		bosluk ++;
		printf("\n");
		
	}
	
	for(int a=0;a<6;a++){
		
	for(int c=0;c<bosluk1;c++)
		printf(" ");
		
		for(int b=0;b<adet1;b++) 
			
			printf("*");
			
		
		
		adet1++;
		bosluk1--;
		printf("\n");
		
		
		
		
		
	}
	
	
	
}














