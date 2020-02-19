#include<iostream>

using namespace std;


int main()
{
	
	int base, altura;
	char coma;
	
	cout<<"Digite base y altura separados por una coma: "; cin>>base>>coma>>altura;
	
	int area = base * altura;
	
	base == altura
		? cout<<"El area calculada es de un cuadrado y vale: "<<area<<endl
		: base > altura
		? cout<<"El area calculada es de un rectangulo horizontal y vale: "<<area<<endl
		: cout<<"El area calculada es de un rectangulo vertical y vale: "<<area<<endl;
}
