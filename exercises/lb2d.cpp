#include <iostream>
using namespace std;

int biggestDigit(int x){
  if (x == 0){
    return 0;
  }else {
    int currentDigit = x % 10;
    int nextDigit = biggestDigit(x / 10);
    return currentDigit > nextDigit ? currentDigit : nextDigit;
  }
}

int main() {
  cout << biggestDigit(29) << endl; // prints 9
  cout << biggestDigit(71415) << endl; // prints 7
  cout << biggestDigit(7) << endl; // prints 7
  
  return 0;
}
