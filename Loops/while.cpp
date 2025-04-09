//
// Created by Dimitar Penchev on 9.04.25.
//

#include <iostream>

using namespace std;

int main() {

    long number, sum = 0, lastDigital;
    cout << "Enter a number: ";
    cin >> number;

    while (number>0) {
        lastDigital = number%10;
        number /= 10;
        sum += lastDigital;
    }
    cout << "Sum of digits: " << sum << endl;


    int n;
    n = 0;
    while (n < 11) {
        cout << n << endl;
        n++;
    }

    for (int i=1; i<n; i++) {
        cout << i << endl;
    }

    n=0;
    do {
        cout << n << endl;
        n++;
    }while (n<11);

}