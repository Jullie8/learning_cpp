#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter a number"<< endl;
	cin >> n;
	
	int rows = 2*n-1;

	for(int r=1; r<=rows; r++){
		for(int c=1; c<=n; c++){
			if(r>=c && r+c <=(2*n)) cout << "*";
		}

		cout << endl;	
	}
	return 0;
}

