#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter value for n:" << endl;
	cin >> n;

	if (!((n > 0) && (n%2==1))) { 
    		return 0;
  }

	for(int r = 1; r <= n; r++) {
		for(int c = 1; c <= n; c++) {
			 if (r + c == n + 1 || c == r){
			 	cout << "*";
			 }else if (c==3){
			 	cout << "*";
			 }else {
			 	cout << "o";
			 }
		}

		cout << endl;
	}
	
	return 0;
}
