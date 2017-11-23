#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>


int manin () {
	
	int sayi; 
	
	srand(time(NULL));
	sayi=10+rand() % 100;
	printf("%d\n",sayi);		
	
	
	
	
	getch();
	
	
	return 0;
}







