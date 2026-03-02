#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "");
	int i;
	double j;
		double *pj;
	
	j = 200;
	i = 100;
	cout << "Valor da variável i: " << i << endl;
	cout << "Tamanho da variável i: " << sizeof(i) << endl;
		cout << "endereço da variável i: " << &i << endl;
		
		cout << endl;
			cout << "Valor da variável j: " << j << endl;
	cout << "Tamanho da variável j: " << sizeof(j) << endl;
		cout << "endereço da variável j: " << &j << endl;
		
		
		pj = &j;
		*pj = 500;
		
			cout << endl;
			cout << "Valor da variável pj: " << pj << endl;
	cout << "Tamanho da variável pj: " << sizeof(pj) << endl;
		cout << "endereço da variável pj: " << &pj << endl;
		cout << endl;
}