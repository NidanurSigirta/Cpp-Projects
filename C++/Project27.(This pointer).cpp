#include <iostream>

using namespace std;

class Employee{
	
	private:
		string name;
		int salary;
		int id;
		
	public:
		Employee(string name,int salary,int id){   // class sýnýfýndaki isimler ve deðer isimleri ayný olursa karýþýklýk olmasýn diye this pointer kullanýlýr
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
	
	Employee employee("nidanur sigirta",80000,220707042);
	
	employee.ShoWInfos();
	
	
	return 0;
}

