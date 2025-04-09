//
// Created by Dimitar Penchev on 23.03.25.
//
#include <iostream>
using namespace std;
int main(){

    int A,B;
    cout << "Enter First Number: ";
    cin >> A;
    cout << "Enter Second Number: ";
    cin >> B;

    for (int i = A; i <= B; i++) {
        if (i<2) {
            continue;
        }
        bool isPrime = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }

}