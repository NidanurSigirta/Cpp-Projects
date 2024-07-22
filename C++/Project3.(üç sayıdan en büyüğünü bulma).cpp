#include <iostream> // cout
#include <clocale> //setlocale

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	setlocale(LC_ALL,"Turkish"); // türkçe karakter çýktýsý için
	
	int sayi1,sayi2,sayi3;
	int enBuyukSayi;
	
	cout<<"Lutfen 3 tane sayi giriniz:"<<endl;
	cin>>sayi1>>sayi2>>sayi3;
	cout<<endl;
	
	enBuyukSayi=sayi1;
	if(sayi1<sayi2)
	enBuyukSayi=sayi2;
	if(sayi2<sayi3)
	enBuyukSayi=sayi3;
	
	cout<<"En büyük sayý: "<<enBuyukSayi<<endl;
	return 0;
}
