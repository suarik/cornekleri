#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	
	int sayi;
	int ciftsayi=0,teksayi=0,ort;
	int sayac=0;
	
	
	srand(time(NULL));
	for(int i=0; i<10;i++){
		sayi=10+rand()%100;
		if((sayi%2)==0) {
			
			printf("cift :%d\n",sayi);
			ciftsayi=ciftsayi+sayi;
			sayac++;
		}
		else{
			
			printf("tek :%d\n",sayi);
			teksayi=teksayi+sayi;
			
		}
		
		
	
		
	}
	
	printf("tek sayi toplam:%d\n",teksayi);
	
	printf("cift sayi toplam : %d\n\n",ciftsayi);
	ort=ciftsayi/sayac;
			
	printf("cift sayi ortalama : %d",ort);
	
}
	
	
	
	
	
	









