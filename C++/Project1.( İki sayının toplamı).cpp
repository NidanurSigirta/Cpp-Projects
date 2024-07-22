#include <iostream> // cout ve cin kullanýmalrý için gerekli

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Klavyeden girilen iki sayýnýn toplamý

using namespace std;  // standart kütüphane

int main(int argc, char** argv) {
	
	int sayi1,  // birinci sayý
	    sayi2,  // ikinci sayý
	    toplam; // Girilen iki sayýnýn toplamýný saklayan deðiþken
	    
	cout<<"lutfen birinci sayiyi giriniz:"; // ekrana mesaj yaz
	cin>>sayi1;  // girilen sayýyý sayi1'e ata
	cout<<"lutfen ikinci sayi giriniz:";// ekrana mesaj yaz
	cin>>sayi2; // girilen sayýyý sayi2'ye ata
	
	toplam=sayi1+sayi2;  // girilen iki sayýyý topla
	cout<<"toplam:"<<toplam<<endl;  // ekrana toplamý yazdýr
	
	return 0;
}
