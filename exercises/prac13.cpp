#include <iostream>
using namespace std;
int main() {
  int a[5], sum = 0;

  cout << "Enter five numbers\n";

  for (int i = 0; i < 5; i++) {
    cin >> a[i];
    sum += a[i];
  }
  
  cout << "Sum of all numbers: " << sum;

  return 0;

}
for (let i = 0; i < 5; i++) {
  console.log('Hello world!');
}

