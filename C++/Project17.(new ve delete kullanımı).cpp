#include<iostream>

using namespace std;

int main(){
	
	int *ptr;
	int size;
	
	cout<<"Kac deger saklayacaksiniz:";
	cin>>size;
	
	ptr=new int[size]; // her biri 4 byte l�k size kadar yeni yer ay�rd�k
	
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
	delete [] ptr;  // delete ile hepsini sildik ve a�a��da ptr 3 de�erini istedi�imizde 0 de�erini d�nderiyor
	
	cout<<ptr[3];
}
