#include <iostream>

using namespace std;

class Student{ // student ad�nda tan�mlad���m�z s�n�f�m�z i�erdeki de�i�kenleri ba�ka yerlerde s�rekli tan�mlamadan kullanmam�z� sa�lar

public: // public herkes taraf�ndan a��k kullan�labilir demek bu sayede name de�i�kenini istedi�imiz yerlerde kullanabiliriz
	string name;
};

int main(int argc, char** argv) {
	
	
	Student student1;  // Student tipinde yeni student1 objesi olu�turduk
	Student student2;
	
	student1.name="Nidanur Sigirta";
	student2.name="Ayse Kara";
	
	cout<<"Ogrenci 1 adi: "<<student1.name<<endl;
	cout<<"Ogrenci 2 adi: "<<student2.name<<endl;
	return 0;
}
