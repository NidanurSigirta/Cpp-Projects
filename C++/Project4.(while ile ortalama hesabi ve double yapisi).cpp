#include <iostream>
#include <iomanip> //setprecision kullan�m� i�in 
#include <clocale>
#define ogrSayisi 5  // kullan�c� program� �al��t�rmadan �nce notu girilecek ��renci say�s�n� buradan belirlemeli !!

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL,"Turkish");
	
	int nott,
	    notSayaci=0,
	    toplam=0;
	double ortalama;  
	
	cout<<"L�tfen notlar� giriniz: "<<endl;
	while(notSayaci<ogrSayisi)
	{
	cin>>nott;
	toplam+=nott;
	notSayaci++;	
	}
    
    ortalama=static_cast<double>(toplam)/notSayaci;
    //ortalama=(double)toplam/notSayaci
    cout<<endl;
    cout<<"S�n�f Ortalamas�: "<<setprecision(3)<<ortalama<<endl;
	  
	return 0;
}
