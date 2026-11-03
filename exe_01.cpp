//
// Created by Alexandar Georgiev on 31.10.26.
//
#include <iostream>
using namespace std;

int sumOfNumbers(int n) {
    int sum = 0;
    int currentNum;
    for (int i = 1; i <= n; i++) {

        cin>>currentNum;
        sum+=currentNum;
    }
    return sum;
}

// int main(int argc, char *argv[]) {
//
//     int number=sumOfNumbers(3);
//     cout<<number<<endl;
// }

