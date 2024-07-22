#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int a=3;
	if(a==5)
	{
		int b;
		b=a*3;
	}
	cout<<"b:"<<b<<endl; // olmaz çünkü b deðikeni main fonksiyonunun scopu dýþýnda tanýmlanmoþtýr
	return 0;
}
