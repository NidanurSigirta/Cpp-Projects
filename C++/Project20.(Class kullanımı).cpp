#include <iostream>

using namespace std;

class Student{ // student adýnda tanýmladýðýmýz sýnýfýmýz içerdeki deðiþkenleri baþka yerlerde sürekli tanýmlamadan kullanmamýzý saðlar

public: // public herkes tarafýndan açýk kullanýlabilir demek bu sayede name deðiþkenini istediðimiz yerlerde kullanabiliriz
	string name;
};

int main(int argc, char** argv) {
	
	
	Student student1;  // Student tipinde yeni student1 objesi oluþturduk
	Student student2;
	
	student1.name="Nidanur Sigirta";
	student2.name="Ayse Kara";
	
	cout<<"Ogrenci 1 adi: "<<student1.name<<endl;
	cout<<"Ogrenci 2 adi: "<<student2.name<<endl;
	return 0;
}
