#include <iostream> 
#include <string>
using namespace std;

void applyCurve(int a, int b, int c, int curve) {
	int score1 = a;
	int score2 = b;
	int score3 = c;

	score1 = a + curve;
	score2 = b + curve;
	score3 = c + curve;

	cout << "The curve is " + to_string(curve) + "\nThe scores after applying the curve are " + to_string(score1) + ", " + to_string(score2) +  ", " + to_string(score3) + "\n";
	return;
}


int main() {
	int x, y, z;
	cout << "Enter three scores: "; 
	cin >> x >> y >> z;

	if(x > 100 || y > 100 || z > 100) {
		return 0;
	}


	int num1 = x, num2 = y, num3 = z;
	int maxNum;

	if(num1 >= num2 && num1>= num3){
		maxNum = num1;
	}else if(num2 >= num1 && num2 >= num3){
		maxNum = num2;
	} else {
		maxNum = num3;	
	}


	applyCurve(x, y, z, 100 - maxNum);

	return 0;
}