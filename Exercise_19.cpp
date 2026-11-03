
#include <numbers>
using namespace std;
#include <iostream>

void printMatrix(int n) {
    int c=0;
    int m=1;
   int k=0;
    for (int i=1;i<=n;i++) {
         k=i;
         c=0;


        for (int j=1;j<=n;j++) {
            cout<<k<<" ";

            if ( (c*4+3) ==(2*j+1) ) {
                k+=2*(n-i)+1;
                c++;
            }else {
                int n=(i-1)*2 +1;
                k+=n;


            }



        }
        cout<<endl;
    }

}

// int main(int argc, char *argv[]) {
//
//
//     printMatrix(4);
// }

