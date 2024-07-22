#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Kullanýcýdan klavye yoluyla aldýðý 3 sayýnýn En Büyük Ortak Bölenini (EBOB)
bulacak bir C++ programý yazýnýz.*/

using namespace std;

int main(int argc, char** argv) {
	int s1,s2,s3,i,eb;
	
	cout<<"3 tane sayi giriniz lutfen:"<<endl;
	cin>>s1>>s2>>s3;
	
	for(i=2;i<=s1 && i<=s2 && i<=s3;i++)  // burada küçük olan sayýya kadar i artacak
{
	if(s1%i==0 && s2%i==0 && s3%i==0)   // ikisini de ortak bölen sayý gelince bunu eb'ye eþitleyecek .eb sýrasýyla döngü devam ettikçe ortak bölünen sayýlara eþitlenecek en son ise en büyüðüne
	eb=i;

}
 cout<<"obebleri:"<<eb;
	
	return 0;
}
