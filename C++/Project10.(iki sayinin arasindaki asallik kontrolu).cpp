#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Kullanýcýdan klavye yoluyla aldýðý iki sayýnýn aralarýnda ASAL olup
olmadýðýný bulan bir C++ programý yazýnýz. (4 ve 15 aralarýnda asaldýr
örneðin.)*/

using namespace std;

int main(int argc, char** argv) {
	
	int sayi1,sayi2,i,max,kontrol=0;
	
	cout<<"lutfen iki sayi giriniz:"<<endl;
	cin>>sayi1>>sayi2;
	
	max=sayi1;
	if(sayi1<sayi2)
	max=sayi2;
	
	for(i=2;i<sayi2;i++)
	{
		if(sayi1%i==0 && sayi2%i==0)
		{
			cout<<"aralarinda asal degiller"<<endl;
			kontrol++;
			break;
		}
	}
	
	if(kontrol==0)
	cout<<"aralarinda asallar";
	
	return 0;
}
