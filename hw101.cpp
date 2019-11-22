#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n1,n2,n3,n4,n5;

    for (int i=10000;i<=99999;i++)
    {
        n1=i/10000%10;
        n2=i/1000%10;
        n3=i/100%10;
        n4=i/10%10;
        n5=i%10;
        if (i%2==0 && n3%2==1 && (n1+n2+n3+n4+n5)%4==0){
            cout<<i<<endl;
        }
    }

return 0;
}
