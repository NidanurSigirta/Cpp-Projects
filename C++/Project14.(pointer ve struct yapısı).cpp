#include <iostream>

using namespace std;

struct Employee{
	
	int id;
	string name;
	string department;
	
};

int main(int argc, char** argv) {
	
	Employee employee1={18,"Nidanur","Muhendis"};
	
	Employee *ptr=&employee1;
	
	cout << ptr->department<<endl;  // normal struct yap�lar� nokta ile g�sterilirken pointer yap�s� ok ile g�sterilir
 
	return 0;
}
