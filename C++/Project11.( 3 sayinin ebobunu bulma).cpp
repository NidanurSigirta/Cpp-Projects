#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Kullan�c�dan klavye yoluyla ald��� 3 say�n�n En B�y�k Ortak B�lenini (EBOB)
bulacak bir C++ program� yaz�n�z.*/

using namespace std;

int main(int argc, char** argv) {
	int s1,s2,s3,i,eb;
	
	cout<<"3 tane sayi giriniz lutfen:"<<endl;
	cin>>s1>>s2>>s3;
	
	for(i=2;i<=s1 && i<=s2 && i<=s3;i++)  // burada k���k olan say�ya kadar i artacak
{
	if(s1%i==0 && s2%i==0 && s3%i==0)   // ikisini de ortak b�len say� gelince bunu eb'ye e�itleyecek .eb s�ras�yla d�ng� devam ettik�e ortak b�l�nen say�lara e�itlenecek en son ise en b�y���ne
	eb=i;

}
 cout<<"obebleri:"<<eb;
	
	return 0;
}
