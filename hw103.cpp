#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n1,n2,n3;

    for (int i=100;i<=999;i++)
    {
        n1=i/100%10;
        n2=i/10%10;
        n3=i%10;
        if (i==pow(n1,3)+pow(n2,3)+pow(n3,3)){
            cout<<i<<endl;
        }
    }

return 0;
}
