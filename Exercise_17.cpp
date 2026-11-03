
#include <iostream>
using namespace std;

//5 2^2 + 2^0
//15 2^3 + 2^2 + 2^1 +2^0

int biggestPowerOfTwo(int n) {
    int num=1;
    int power=0;

    while (num*2<=n) { //8(2^3) - 10
        num*=2;
        power++;
    }
    return power;
}
int pow(int base, int power) {
 int sum=1;
    for (int i = 0; i < power; i++) {
        sum*=base;
    }
    return sum;
}

void powersOfTwo(int n) {
    int biggestPower=biggestPowerOfTwo(n);

    while (n>0) {

        if (pow(2,biggestPower)<=n) {
            n-=pow(2,biggestPower);
            cout<<"2^"<<biggestPower<<" ";
        }
       biggestPower--;
    }


}

// int main(int argc, char *argv[]) {
//
// biggestPowerOfTwo();
//
// }

