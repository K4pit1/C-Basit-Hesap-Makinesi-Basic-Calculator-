#include <stdio.h>
#include <stdlib.h>


int sayi1,sayi2,sonuc;
char islem;

int main() {
	printf("*****Basit Hesap Makinesi*****\n\n");
	
	printf("1. Sayiyi Giriniz: ");
	scanf("%d",&sayi1);
	printf("2. Sayiyi Giriniz: ");
	scanf("%d",&sayi2);
	printf("Yapmak Istediginiz Islem: ");
	scanf("%s",&islem);
	
	switch(islem)
	{
		case '+':
			sonuc=sayi1+sayi2;
			printf(" %d",sonuc);
			break;
		case '-':
			sonuc=sayi1-sayi2;
			printf(" %d",sonuc);
			break;
		case '*':
			sonuc=sayi1*sayi2;
			printf(" %d",sonuc);
			break;
		case '/':
			sonuc=sayi1/sayi2;
			printf(" %d",sonuc);
			break;
		default: printf("Yanlis ya da hatali islem tusladiniz");
		break;
	}
	scanf("%d",&sayi1);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

