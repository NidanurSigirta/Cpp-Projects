#include <iostream>

using namespace std;

class Student{ // bu class'�n art�k bir �zelli�i ve bir metodu var
	public:
	string name;
	
	void TellName(){  // metod olu�turduk
		
		cout<<"Benim adim "<< name<<endl;
	}
};

int main(int argc, char** argv) {
	
	Student student1;
	
	student1.name="Mimoza";
	student1.TellName();
	return 0;
}
