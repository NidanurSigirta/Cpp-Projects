#include <iostream> // cout
#include <clocale> //setlocale

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	setlocale(LC_ALL,"Turkish"); // t�rk�e karakter ��kt�s� i�in
	
	int a=3; // a'y� ilk ba�ta 3 diye tan�mlad�k ancak if i�inde tekrardan atama yapt�k ve bu yanl�� olmad��� i�in ekrana yazd�rd�
	if(a=6)
	cout<<"Pijamal� hasta ya��z �of�re �abucak g�vendi.\n\n";
	
	int sayi1,
	    sayi2;
	    
	cout<<"Lutfen iki sayi giriniz:"<<endl;
	cin>>sayi1>>sayi2;
	
	if(sayi1==sayi2)
	cout<<sayi1<<" e�ittir "<<sayi2<<endl;
	    		
	if(sayi1!=sayi2)
	cout<<sayi1<<" e�it de�ildir "<<sayi2<<endl;
	    
	if(sayi1>sayi2)
	cout<<sayi1<<" b�y�kt�r "<<sayi2<<endl;
	    	
	if(sayi1<sayi2)
	cout<<sayi1<<" k���kt�r "<<sayi2<<endl;
	
	return 0;
}
