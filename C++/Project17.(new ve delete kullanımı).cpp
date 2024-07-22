#include<iostream>

using namespace std;

int main(){
	
	int *ptr;
	int size;
	
	cout<<"Kac deger saklayacaksiniz:";
	cin>>size;
	
	ptr=new int[size]; // her biri 4 byte lýk size kadar yeni yer ayýrdýk
	
	for(int i=0;i<size;i++)
	{
		cout<<"Deger:";
		cin>>ptr[i];
	}
	
	cout<<endl;
	
		for(int i=0;i<size;i++)
	{
		cout<<"Eleman:"<<ptr[i]<<endl;
	}
	
	cout<<endl;
	delete [] ptr;  // delete ile hepsini sildik ve aþaðýda ptr 3 deðerini istediðimizde 0 deðerini dönderiyor
	
	cout<<ptr[3];
}
