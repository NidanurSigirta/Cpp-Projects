#include<iostream>

using namespace std;

class Gamer{
	
public:
	
static int gamers; // statik yapt�k ve bu her de�i�en de�eri statik kabul ederek onun �st�nden i�lem yap�cak (0 dan 4 e kadar artmas�)

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
