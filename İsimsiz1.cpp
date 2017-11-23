#include<stdio.h>
#include<conio.h>
#define PI 3.14

int main(){
	
	int yari;
	float hacim;
	float kati;
	int sayi;
	
	printf("yaricapi gir:");
	scanf("%d",&yari);
	
	hacim =(4/3.0)*PI*(yari*yari*yari);
	printf("hacim= %.2f dir\t" , hacim );
	printf("katini giriniz:");
	scanf("%d",&sayi);
		kati = (hacim)*(sayi);
		printf("%.2f",&kati);
	}
	
	
	
	
	





