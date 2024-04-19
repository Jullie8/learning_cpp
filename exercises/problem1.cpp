#include <iostream>
using namespace std;
int main() {
	string name;
	int age;
	int height;

	cout << "What is your name?" << endl;
	cin >> name;

	cout << "What is your age?" << endl;
	cin >> age;

	cout << "What is your height in inches?" << endl;
	cin >> height;

	cout << "Hello, " << name << ".\n" << "Your age in days is " << age * 365 << "." << endl;
       	cout << "Your height in feet and inches is " << height/12 << " feet " << height%12 << " inches." << endl;

	return 0;	
}
	
