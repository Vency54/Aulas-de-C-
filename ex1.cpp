#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	int i;
	double d;
	char c;
	string s;
	
	c = 'A';

	cout << "Valor char: " << c << endl;
	
	s = "IFSP";
	
	cout << "Valor string: " << s << endl;
	
	cout << "Digite valor int: ";
	cin >> i;
cout << "Digite valor double: ";
	cin >> d;
	cout << "Valor int  : " << setw(10) << i << endl;
		std::cout << "Valor double: " << d << endl;
	return 0;
}