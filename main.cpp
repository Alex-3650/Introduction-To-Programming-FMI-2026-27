#include <iostream>
using namespace std;


void printMatrix3(int n) {
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            if (i>=j) {
                cout<<"1 ";
            }else {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

  void  printTriangle(int n) {

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout<<j<<" ";
            }
            cout<<endl;
        }
    for (int i = n-1; i > 0;i--) {
        for (int j = i; j >0; j--) {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void printPyramid(int n,char c) {

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n-1-i; j++) {
            cout<<" ";
        }
        for (int j = 0; j < i*2-1; j++) {
            cout<<c;
        }
        cout<<endl;
    }
}

// int power(int a, int b) {
//
//     for (int i = 0; i < b; i++) {
//         a*=a;
//     }
//     return a;
// }

int printObject(int n) {
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            cout<<j<<" ";
        }
        for (int j = 0; j < (n-i)*4 + 4; j++) {
            if ( i==n ) {
                cout<<"-";
            }else {
                cout<<" ";
            }
        }
        for (int j = i; j >=1; j--) {
            cout<<" "<<j;
        }
        cout<<endl;

    }
    for (int i = n-1; i >= 1; i--) {

        for (int j = 1; j <=i ; j++) {
            cout<<j<<" ";
        }
        for (int k = 0; k < (n-i)*4 + 4; k++) {

            cout<<" ";
        }
        for (int j = i; j >=1; j--) {
            cout<<" "<<j;
        }
        cout<<endl;

    }
}



int main() {

    // printMatrix(4);
    // printTriangle(5);
    // printPyramid(5,'@');
    printObject(6);
    return 0;
}