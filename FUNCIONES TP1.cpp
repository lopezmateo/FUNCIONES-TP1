#include <iostream>
using namespace std;
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
int dividir(int a, int b);

int main ()
{
	int n1,n2;
	int s,e,m,d;
	 
	cout<<"ingrese numero 1"<<endl;
	cin>>n1;
	
	cout<<"ingrese numero 2"<<endl;
	cin>>n2;
	
	s=sumar(n1,n2);
	e=restar(n1,n2);
	m=multiplicar(n1,n2);
	d=dividir(n1,n2);
	
	cout<<"la suma es: "<<s<<endl;
	cout<<"la resta es: "<<e<<endl;
	cout<<"la multiplicacion es: "<<m<<endl;
	cout<<"la division es: "<<d<<endl;
	
	return 0;
	
}

int sumar(int a, int b)
{
	return a+b;
}

int restar(int a, int b)
{
	return a-b;
}

int multiplicar(int a, int b)
{
	return a*b;
}

int dividir(int a, int b)
{
	return a/b;
}
