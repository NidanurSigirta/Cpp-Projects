#include <iostream> // cout
#include <clocale> //setlocale

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	setlocale(LC_ALL,"Turkish"); // türkçe karakter çýktýsý için
	
	int a=3; // a'yý ilk baþta 3 diye tanýmladýk ancak if içinde tekrardan atama yaptýk ve bu yanlýþ olmadýðý için ekrana yazdýrdý
	if(a=6)
	cout<<"Pijamalý hasta yaðýz þoföre çabucak güvendi.\n\n";
	
	int sayi1,
	    sayi2;
	    
	cout<<"Lutfen iki sayi giriniz:"<<endl;
	cin>>sayi1>>sayi2;
	
	if(sayi1==sayi2)
	cout<<sayi1<<" eþittir "<<sayi2<<endl;
	    		
	if(sayi1!=sayi2)
	cout<<sayi1<<" eþit deðildir "<<sayi2<<endl;
	    
	if(sayi1>sayi2)
	cout<<sayi1<<" büyüktür "<<sayi2<<endl;
	    	
	if(sayi1<sayi2)
	cout<<sayi1<<" küçüktür "<<sayi2<<endl;
	
	return 0;
}
