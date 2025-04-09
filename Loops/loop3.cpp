//
// Created by Dimitar Penchev on 26.03.25.
//

#include <iostream>
int main(){

    int n,sum;
    sum = 0;

    std::cout << "Въведете число: ";
    std::cin >> n;
    for (int i = 0; i <= n; i++) {
        sum += i;
    }

    std::cout << "Сумата от 1 до "<< n << " е:"  << sum << std::endl;


}