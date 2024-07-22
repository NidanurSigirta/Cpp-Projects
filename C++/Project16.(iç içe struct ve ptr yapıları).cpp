#include <iostream>

using namespace std;

struct Address{
	
	string cityName;
	int no;
};

struct Employee{
	
	int id;
	string name;
	string department;
	Address *address;
};
int main(int argc, char** argv) {
	
	Employee employee;

	employee.id=246;
	employee.name="Nidanurr";
	employee.department="Muhendis";
	
    Address address={"Ýstanbul",13};
    
    employee.address=&address;
    
    Employee *ptr=&employee;
    
    cout<<"Departman:"<<employee.department<<endl;
    cout<<"Cityname:"<<employee.address->cityName<<endl;
    cout<<"No:"<<ptr->address->no<<endl;
    cout<<"Id:"<<employee.id<<endl;
    
	
	return 0;
}
