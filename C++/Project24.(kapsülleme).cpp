 #include <iostream>

/* Deðiþkenleri private ile tanýmlýyoruz ki kapsülleme yaparak girilen yanlýþ deðerleri önleyelim .
aþaðýda yaþý negatif olmama koþuluna baðlý kýlarak yanlýþlýk olmasýný önledik bilmeyen biri girerse verilen uyarý ile düzeltebilir
*/
using namespace std;

class Employee{
	
	private: // sadece class içinde eriþim saðlanýr
		string name;
		int age;
		
	public:
	
	
	void SetAge(int yas){  // private içinde olan name public de setname deðiþkeni ile dolaylý yoldan kullanýlabilir
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
	
	
	void SetName(string isim){  // private içinde olan name public de setname deðiþkeni ile dolaylý yoldan kullanýlabilir
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








