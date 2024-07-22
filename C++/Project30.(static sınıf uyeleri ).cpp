#include<iostream>

using namespace std;

class Gamer{
	
public:
	
static int gamers; // statik yaptýk ve bu her deðiþen deðeri statik kabul ederek onun üstünden iþlem yapýcak (0 dan 4 e kadar artmasý)

Gamer(){
	gamers++;
	cout<<"Yeni oyuncu olusturuldu "<<endl;
}
};

int Gamer::gamers=0;
int main(){
	
	Gamer gamer1;
	Gamer gamer2;
	Gamer gamer3;
	Gamer gamer4;
	
	cout<<Gamer::gamers<<endl;

	return 0;
}
