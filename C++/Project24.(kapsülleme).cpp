 #include <iostream>

/* De�i�kenleri private ile tan�ml�yoruz ki kaps�lleme yaparak girilen yanl�� de�erleri �nleyelim .
a�a��da ya�� negatif olmama ko�uluna ba�l� k�larak yanl��l�k olmas�n� �nledik bilmeyen biri girerse verilen uyar� ile d�zeltebilir
*/
using namespace std;

class Employee{
	
	private: // sadece class i�inde eri�im sa�lan�r
		string name;
		int age;
		
	public:
	
	
	void SetAge(int yas){  // private i�inde olan name public de setname de�i�keni ile dolayl� yoldan kullan�labilir
		if(yas<0){
			cout<<"Negatif bir deger veremezsiniz."<<endl;
		}
		else{
			age=yas;
		}
	}	
	
	int GetAge(){
		return age;
	}
	
	
	void SetName(string isim){  // private i�inde olan name public de setname de�i�keni ile dolayl� yoldan kullan�labilir
		name=isim;
	}	
	
	string GetName(){
		return name;
	}
};

int main(int argc, char** argv) {   
	
	Employee employee1;
	
	employee1.SetName("Nidanur Sigirta");
	cout<<employee1.GetName()<<endl;
	
		
	employee1.SetAge(18);
	cout<<employee1.GetAge()<<endl;
	
	
	return 0;
}








