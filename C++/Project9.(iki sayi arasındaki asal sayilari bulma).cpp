#include <iostream>
#include<stdlib.h>

/* Kullanýcýdan klavye yoluyla aldýðý belirli bir aralýk içerisindeki bütün ASAL
sayýlarý ve bu ASAL sayýlarýn sayýsýný ekrana basan bir C++ programý
yazýnýz*/

using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish"); 
	
	int sayi1,sayi2,max,min,sayac;
	cout<<"1. Sayý : "; 
	cin>>sayi1;
	if(sayi1==1)//1 asal sayý deðildir.!!!
	{
		sayi1++;
	}

	cout<<"2. Sayý : ";
	cin>>sayi2;
	
	if(sayi2==1)//1 asal sayý deðildir.!!!
	{
		sayi2++;
	}
	
	if(sayi1<sayi2){
max=sayi2;
min=sayi1;
}               
else{
max=sayi1;   
min=sayi2;
}
	for(int i=min;i<=max;i++)
	{
		sayac=0;//Sayacý her yeni sayý için sýfýrlamamýz gerekiyor.
		for(int j=2;j<i;j++)//sayýyý bölme iþlemine 2 den baþlýyacaðýz ve sayýyý kendisine bölmeyeceðiz.
		{
			if(i%j==0)
			{
				sayac++;
				break; //Eðer sayý tam bölündüyse diðer sayýlara bölmeye gerek yok.
				//Döngüden çýkýyoruz.
			}
		}
		if(sayac==0)//Sayac 0 olmasý hiç bir böleni olmamasý anlamýna geliyor
		{
			cout<<i<<" ";// Yazdýrýyoruz.
		}
	}
}
 
