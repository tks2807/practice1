#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n1,n2,n3,n4;

    for (int i=1000;i<=9999;i++)
    {
        n1=i/1000%10;
        n2=i/100%10;
        n3=i/10%10;
        n4=i%10;
        if (n1!=n2 && n1!=n3 && n1!=n4 && n2!=n3 && n2!=n4 && n3!=n4){
            cout<<i<<endl;
        }
    }

return 0;
}
