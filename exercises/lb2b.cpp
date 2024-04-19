#include <iostream>
using namespace std;

string parityCheck(int x) {
	int number = x;
	int oddCount = 0;
	int evenCount = 0;
	
	while (number > 0) {
		int digit =  number % 10;

		if (digit % 2 == 0){
			evenCount ++;
		} else {
			oddCount ++;
		}

		number = number/10;
	}

	if (oddCount == 0) {
		return "All even";

	} else if (evenCount == 0) {
		return "All odd"; 
	}else {
		return "Mixed Parity";
	}
}


int main() {
	int n; 

	cout << "Enter a number with at least three digits: ";
	cin >>  n;
	
	if (n < 100) {
		cout << "Goodbye" << endl;

		return 0;
	}

	string result = parityCheck(n);

	cout << result << endl;

	return 0;

}
