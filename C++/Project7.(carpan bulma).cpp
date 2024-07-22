#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Kullanýcýdan klavye yoluyla aldýðý bir sayýnýn bölenlerini veya çarpanlarýný
bularak ekrana basan bir C++ programý yazýnýz*/

using namespace std;

int main(int argc, char** argv) {
	int sayi,i=1,carpan;
	
	cout<<"lutfen bir sayi giriniz:"<<endl;
	cin>>sayi;
	cout<<endl<<sayi<<" sayisinin carpanlari"<<endl;
	
	for(;i<=sayi;i++)
	{
		if(sayi%i==0)
		{
			cout<<i;
			cout<<endl;
		}
		
	}
	
	return 0;
}
