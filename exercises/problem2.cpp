#include <iostream>
using namespace std;
int main() {
	int month;
	int day;
		
	cout << "Enter your birth month:" << endl;
	cin >> month;

	cout << "Enter your birth day:" << endl;
	cin >> day;
	
	int month_day = month * 100 + day;

	if(!((month >= 1 && month <=12) && (day >= 1 && day <= 31))) {
   		cout << "Wrong day, bye!" << endl;
 	}
	else if(month_day >= 316 && month_day <= 915) {
    		cout << "You were born in warmer month (Spring or Summer)" << endl;
  	} else {
   		cout << "You were born in colder month (Fall or Winter)" << endl;
  	}

	return 0;
}

