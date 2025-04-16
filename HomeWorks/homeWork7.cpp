//
// Created by Dimitar Penchev on 16.04.25.
//
#include <iostream>
using namespace std;
int main(){

  int number, lastDigital;
  cout << "Enter a number: ";
  cin >> number;
  while (number>0) {
    lastDigital = number%10;
    number /= 10;
    cout << lastDigital << " ";
  }

  return 0;
}