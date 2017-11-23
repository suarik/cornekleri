#include <stdio.h>



int main(){
	
	int sayi1,sayi2,toplama,cikarma,carpma,bolme,islemsec;
	
	printf("sayi1 gir:");
	scanf("%d",&sayi1);
	printf("sayi2 gir");
	scanf("%d",&sayi2);
	
	
	printf("toplama '1'\n");
		printf("cikarma '2'\n");
		printf("carpma '3'\n");
		printf("bolme '4'\n");
		printf("islemsec\n");
		scanf("%d",&islemsec);
	
	
	
	switch(islemsec) {
		
		
		
		
		
		case 1 :
			toplama=sayi1+sayi2;
			printf("%d",toplama);
			break;
			
			case 2 :
			cikarma=sayi1-sayi2;
			printf("%d",cikarma);
			break;
			
			case 3:
			carpma=sayi1*sayi2;
			printf("%d",carpma);
			break;
			
			case 4 :
			bolme=sayi1/sayi2;
			printf("%d",bolme);
			break;
		
	}
	
	
	
	
return 0;	
}
