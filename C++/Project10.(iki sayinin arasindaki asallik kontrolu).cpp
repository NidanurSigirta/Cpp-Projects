#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Kullan�c�dan klavye yoluyla ald��� iki say�n�n aralar�nda ASAL olup
olmad���n� bulan bir C++ program� yaz�n�z. (4 ve 15 aralar�nda asald�r
�rne�in.)*/

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
