#include <iostream>
#include<stdlib.h>

/* Kullan�c�dan klavye yoluyla ald��� belirli bir aral�k i�erisindeki b�t�n ASAL
say�lar� ve bu ASAL say�lar�n say�s�n� ekrana basan bir C++ program�
yaz�n�z*/

using namespace std;

int main()
{
	setlocale(LC_ALL,"Turkish"); 
	
	int sayi1,sayi2,max,min,sayac;
	cout<<"1. Say� : "; 
	cin>>sayi1;
	if(sayi1==1)//1 asal say� de�ildir.!!!
	{
		sayi1++;
	}

	cout<<"2. Say� : ";
	cin>>sayi2;
	
	if(sayi2==1)//1 asal say� de�ildir.!!!
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
		sayac=0;//Sayac� her yeni say� i�in s�f�rlamam�z gerekiyor.
		for(int j=2;j<i;j++)//say�y� b�lme i�lemine 2 den ba�l�yaca��z ve say�y� kendisine b�lmeyece�iz.
		{
			if(i%j==0)
			{
				sayac++;
				break; //E�er say� tam b�l�nd�yse di�er say�lara b�lmeye gerek yok.
				//D�ng�den ��k�yoruz.
			}
		}
		if(sayac==0)//Sayac 0 olmas� hi� bir b�leni olmamas� anlam�na geliyor
		{
			cout<<i<<" ";// Yazd�r�yoruz.
		}
	}
}
 
