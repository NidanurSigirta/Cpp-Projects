#include <iostream>

// fonksiyon overloading(fazla yüklenmesi)
using namespace std;

void selamla(){
	
	cout<<"Merhaba"<<endl;
}

void selamla(string name){
	
	cout<<"Merhaba "<<name<<endl;
}

void selamla(string name1,string name2){
	
	cout<<"Merhaba "<<name1<<" "<<name2<<endl;
}

int main(int argc, char** argv) {
	
	selamla();
	
	selamla("Nidanur");
	
	selamla("Nidanur","Sigirta");
}
