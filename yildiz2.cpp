#include<stdio.h>

int main(){
	
	int adet=1;
	int yildiz=1;
	int bosluk=17;
	for(int i=1;i<6;i++){
		
		for(int a=0; a<adet;a++)
		printf("*");
			
		for(int b=0;b<bosluk;b++)	
			printf(" ");
			
		for(int c=0;c<yildiz;c++)
		printf("*");
		
		adet+=2;
		yildiz+=2;
		bosluk-=4;
		printf("\n");
}

	
}










