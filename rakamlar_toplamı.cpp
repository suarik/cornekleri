#include <stdio.h>
#include <math.h>

int main(void)
{
	int sayi, rakam, toplam = 0;
	printf("\nBir Sayi Giriniz : ");
	scanf("%i", &sayi);
	
	
	while(sayi > 0) {
		rakam = sayi % 10;
	//	printf("\nRakam : %i", rakam);
		toplam = toplam + rakam;
			//printf("\nToplam : %i", toplam);
		sayi = sayi / 10;
		//	printf("\nSayi: %i", sayi);
	}
	printf("\nSayidaki rakamlarin toplami : %i", toplam);
	return 0;
}
