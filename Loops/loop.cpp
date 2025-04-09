//
// Created by Dimitar Penchev on 19.03.25.
//
#include <iostream>
using namespace std;
int main(){

    // animals park
    int days, lions, giraffes, monkeys, animalsSum;
    animalsSum = 0;
    cout << "Enter number of days: ";
    cin >> days;

    if (days>0 && days<31) {
        for (int i=1; i<=days; i++) {

            cout << "Enter number of lions: ";
            cin >> lions;
            cout << "Enter number of giraffes: ";
            cin >> giraffes;
            cout << "Enter number of monkeys: ";
            cin >> monkeys;
            animalsSum += lions + giraffes + monkeys;
            cout << "Ден " << i << ": общо " <<  lions + giraffes + monkeys <<" животни" << endl;
        }
        cout  << "Общо за "<< days <<" дни: " << " животни" << endl;
    }
    else {
        cout << "Invalid number of days" << endl;
    }



  	// Find prime nubmer

    int startNumber, endNumber;
    cout << "Enter start number: ";
    cin >> startNumber;
    cout << "Enter end number: ";
    cin >> endNumber;

    for(int i = startNumber; i <= endNumber; i++){
      if(i < 2){
        continue;
      }
        bool isPrime = true;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }

        if(isPrime){
            cout << i << " ";
        }
	}

        // 1 - 20



    // Print numbers from 1 to 10

    // Print Hello world message 10 times
    for (int i = 0; i <= 10; i++)
    {
        cout << "Hello world: " <<i << endl;
    }

    // Multiply number by 2 until it is greater than 10
    int number = 4;
    for (int i = 1; i < 5; i++)
    {
        number *= 2;

        if (number >10){
            cout << "After " << i << " interations." << endl;
            cout << "Number is bigger than 10" << endl;
            break;
        }
       
    }

    // Print even numbers up to the value of number
    for (int i = 0; i <= number; i++)
    {
        if (i % 2 == 0){
            continue;
        }
        cout << i << endl;
    }
    

    return 0;

} 