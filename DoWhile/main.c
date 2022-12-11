#include<stdio.h>

int main(){
	int sayi,toplam=0,hane=0;
	printf("sayi giriniz:");
    scanf("%d",&sayi);
    
    do
    {
      toplam=toplam+(sayi%10);
      sayi=sayi/10;
      hane+=1;
	}while(sayi>0);
	
	printf("basamaklarin toplami:%d basamak sayisi:%d",toplam,hane);
	
	
	
	return 0;
}
