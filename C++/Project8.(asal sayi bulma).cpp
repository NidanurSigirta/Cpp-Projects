#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Kullan�c�dan klavye yoluyla ald��� bir say�n�n ASAL say� olup olmad���n�
belirleyen ve e�er ASAL say� ise ASAL �arpanlar�n� ekrana basan bir C++
program� yaz�n�z.*/

using namespace std;

int main(int argc, char** argv) {
	
	int sayi,i,j=1;
	int kontrol=0;
	
	cout<<"lutfen bir sayi giriniz:"<<endl;
	cin>>sayi;
	
	for(i=2;i<sayi;i++)
	{
		if(sayi%i==0 )
		{
			cout<<endl<<"sayiniz asal degildir"<<endl;;
			kontrol=1;
			cout<<endl<<sayi<<" sayisinin carpanlari"<<endl;
	
	for(;j<=sayi;j++)
	{
		if(sayi%j==0)
		{
			cout<<j;
			cout<<endl;
		}
	}
			break;
		}
	}
	if(kontrol==0)
	cout<<endl<<"sayiniz asaldir"<<endl;
	return 0;
}
