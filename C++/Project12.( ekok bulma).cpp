#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Kullanýcýdan klavye yoluyla aldýðý 3 sayýnýn En Küçük Ortak Katýný (EKOK)
bulacak bir C++ programý yazýnýz. (15 sayýsýnýn katlarý: 15 30 45 60 75 ve 20
sayýsýnýn katlarý: 20 40 60 týr. Dolayýsýyla EKOK(15,20)=60 týr.)*/

using namespace std;

int main(int argc, char** argv) {
	
		int s1,s2,s3,i,eb,ek;
	
	cout<<"3 tane sayi giriniz lutfen:"<<endl;
	cin>>s1>>s2>>s3;
	
	for(i=2;i<=s1 && i<=s2 && i<=s3;i++)  // burada küçük olan sayýya kadar i artacak
{
	if(s1%i==0 && s2%i==0 && s3%i==0)   // ikisini de ortak bölen sayý gelince bunu eb'ye eþitleyecek .eb sýrasýyla döngü devam ettikçe ortak bölünen sayýlara eþitlenecek en son ise en büyüðüne
	eb=i;

}
ek=(s1*s2*s3)/(eb*eb*eb);
 cout<<"okekleri:"<<ek;
	return 0;
}
