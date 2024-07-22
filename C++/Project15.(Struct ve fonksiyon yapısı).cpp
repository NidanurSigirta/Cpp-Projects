#include<iostream>

using namespace std;

struct Employee{
	
	int id;
	string name;
	string department;
};

void ShowEmployee(Employee employee){
	
	cout<<"Id:"<<employee.id<<endl;
	cout<<"Name:"<<employee.name<<endl;
	cout<<"Departman:"<<employee.department<<endl;
	
}

void ShowEmployee(Employee *employee){
	
	cout<<"Id:"<<employee->id<<endl;
	cout<<"Name:"<<employee->name<<endl;
	cout<<"Departman:"<<employee->department<<endl;
	
}
int main(){
	
	Employee employee1={220707042,"Nidanur Sigirta","Computer Engineer"};
	
	ShowEmployee(employee1);
	
	cout<<endl;
	ShowEmployee(&employee1);  // employee1 in herhangi bir deðerini deðiþtirmek için referans pointer kullanýlýr 
}
