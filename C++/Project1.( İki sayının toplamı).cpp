#include <iostream> // cout ve cin kullan�malr� i�in gerekli

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Klavyeden girilen iki say�n�n toplam�

using namespace std;  // standart k�t�phane

int main(int argc, char** argv) {
	
	int sayi1,  // birinci say�
	    sayi2,  // ikinci say�
	    toplam; // Girilen iki say�n�n toplam�n� saklayan de�i�ken
	    
	cout<<"lutfen birinci sayiyi giriniz:"; // ekrana mesaj yaz
	cin>>sayi1;  // girilen say�y� sayi1'e ata
	cout<<"lutfen ikinci sayi giriniz:";// ekrana mesaj yaz
	cin>>sayi2; // girilen say�y� sayi2'ye ata
	
	toplam=sayi1+sayi2;  // girilen iki say�y� topla
	cout<<"toplam:"<<toplam<<endl;  // ekrana toplam� yazd�r
	
	return 0;
}
