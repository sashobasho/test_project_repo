#include <iostream>
using namespace std;

int main()
{
	char name[100];
	cout << "Enter your name: ";
	cin.getline(name, 100, '\n');
	cout << "Hello, " << name << "!\n";
	return 0;
}
