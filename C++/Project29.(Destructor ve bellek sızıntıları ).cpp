#include<iostream>

using namespace std;

class Employee{
	
public:
	
	string *s;
	int *i;
	
	Employee(string str,int ivalue){
     
     s=new string;
     i=new int ;
     
     *s=str;
     *i=ivalue;
}

void Show(){
	cout<<"String degeri: "<< *s<<" "<<"int degeri: "<< *i<<endl;
}
~Employee(){
	delete s; // yerlerini de bellekten siliyoruz
	delete i;
	
	cout<<"Destructor cagirildi"<<endl; // bellekten temizledikten sonra çaðýrýlan bir metottur
}
};

int main(){
	
	Employee *emp=new Employee("Mustafa Murat",25);
	emp->Show();
	delete emp;

	return 0;
}
