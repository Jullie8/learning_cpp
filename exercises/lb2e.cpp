#include <iostream>
#include <ctime>
using namespace std;
int main() {
  srand(time(0));

  int arr[50] = {}; 

  for (int i=0; i< 50; i++) {
    arr[i] = rand() % 100 +1;
    cout << arr[i] << " ";
  }

  int biggestNumber = arr[0];
  int smallestNumber = arr[0];

  for (int i = 1; i < 50; i++) {
    int currentNumber = arr[i];

    if (currentNumber > biggestNumber){
      biggestNumber = currentNumber;
    }

    if (currentNumber < smallestNumber){
      smallestNumber = currentNumber;
    }
  }



  cout << endl;
  cout << "The largest number in the array is " << biggestNumber << endl; 
  cout << "The smallest number in the array is " << smallestNumber << endl;
}
