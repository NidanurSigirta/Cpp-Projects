#include <iostream>

using namespace std;

class Employee{
	
	private:
		string name;
		int salary;
		int id;
		
	public:
		Employee(){ 
			this->name="Bilgi Yok";
			this->salary=0;
			this->id=0;
		}
	
		Employee(string name,int salary){ 
			this->name=name;
			this->salary=salary;
			this->id=0;
		}
	
		Employee(string name,int salary,int id){ 
			this->name=name;
			this->salary=salary;
			this->id=id;
		}
	
		
		string GetName(){
			return name;
		}
		
	
		
		int  GetSalary(){
			return salary;
		}
		
		
		
	    int GeId(){
			return id;
		}
		
		void ShoWInfos(){
			
			cout<<"isim: "<<this->name<<endl;
			cout<<"maas: "<<this->salary<<endl;
			cout<<"kimlik: "<<this->id<<endl;
		}
	
};
int main(int argc, char** argv) {
	
	Employee employee1("nidanur sigirta",80000,220707042);
	
	Employee employee2("sumeyye",6578);
	
	Employee employee3; /*yukarýda parametre almadýðý için böyle tanýmlayabiliriz.
	Ayrýca yukarýdaki bütün employee kýsýmlarýný silsek sadece aþaðýda bu çalýþýr.Bilgisayar kendisi zaten tanýmlar bunu*/
	

	employee1.ShoWInfos();
	cout<<endl;
	employee2.ShoWInfos();
	cout<<endl;
	employee3.ShoWInfos();
	
	return 0;
}

