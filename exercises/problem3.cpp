#include <iostream>
using namespace std;
int main() {
	int x, y;
	cout << "Enter two positive integers" << endl;
	cin >> x >> y;

	int larger_num = x > y ? x : y;
  	int smaller_num = x < y ? x : y;

	if(!(x>0 && y>0)){
		cout << "Invalid input! Goodbye.";
		return 0;
	}
	
	for (int r = 0; r < larger_num; r++) {
    	 	cout << "*";
  	}
	cout << endl;

	
	for (int c = 1; c <= smaller_num ; c++) {
		cout << "*" << endl;
  	}

	return 0;
}

