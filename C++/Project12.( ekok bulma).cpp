#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Kullan�c�dan klavye yoluyla ald��� 3 say�n�n En K���k Ortak Kat�n� (EKOK)
bulacak bir C++ program� yaz�n�z. (15 say�s�n�n katlar�: 15 30 45 60 75 ve 20
say�s�n�n katlar�: 20 40 60 t�r. Dolay�s�yla EKOK(15,20)=60 t�r.)*/

using namespace std;

int main(int argc, char** argv) {
	
		int s1,s2,s3,i,eb,ek;
	
	cout<<"3 tane sayi giriniz lutfen:"<<endl;
	cin>>s1>>s2>>s3;
	
	for(i=2;i<=s1 && i<=s2 && i<=s3;i++)  // burada k���k olan say�ya kadar i artacak
{
	if(s1%i==0 && s2%i==0 && s3%i==0)   // ikisini de ortak b�len say� gelince bunu eb'ye e�itleyecek .eb s�ras�yla d�ng� devam ettik�e ortak b�l�nen say�lara e�itlenecek en son ise en b�y���ne
	eb=i;

}
ek=(s1*s2*s3)/(eb*eb*eb);
 cout<<"okekleri:"<<ek;
	return 0;
}
