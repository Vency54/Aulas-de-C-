#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	int i;
	double d;
	char c;
	string s;

	cout << "Digite valor int: ";
	cin >> i;
cout << "Digite valor double: ";
	cin >> d;
	cout << "Valor int   : " << setw(10) << i << endl;
		
		
		std::cout << "Valor double: " << setprecision(2) << setw(10) << d << endl;
		std::cout << "Valor double: " << setprecision(3) << setw(10) << d << endl;
		std::cout << "Valor double: " << setprecision(4) << setw(10) << d << endl;
		
		cout << fixed;
				std::cout << "Valor double: " << setprecision(2) << setw(10) << d << endl;
		std::cout << "Valor double: " << setprecision(3) << setw(10) << d << endl;
		std::cout << "Valor double: " << setprecision(4) << setw(10) << d << endl;
	return 0;
}