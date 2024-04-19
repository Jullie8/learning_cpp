#include <iostream>
using namespace std;
int main() {
	int num1;
	int num2;
	int counter = 1;

	cout << "Enter two integers. The second must be less than half the value of the first:" << endl;
	cin >> num1 >> num2;

	if (!(num2 < (num1/2))) {
		cout << "Invalid input! Goodbye." << endl;
		return 0;
	}
	
	cout << "The numbers from 1 to " <<  num1 << " that are not evenly divisible by " << num2 << " are:" << endl;

	for (int r=1; r <= num1; r++){
    		if (!(r % num2==0)) {
      			cout << r << " ";
    		
			if (counter == 5){
      				cout << endl;
    			}
      		
			counter +=1;
    		}
  	}

	return 0;
}
