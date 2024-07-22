#include<iostream>

using namespace std;

struct Employee {

	int id;
	string name;
	string department;
};

int main(){

Employee employee1 = {12,"nidanur"};

employee1.department = "muhendis";

cout << employee1.id << endl;

}
