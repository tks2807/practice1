#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
   int cnt=0;
        while (n>0)
        {
            if ((n%10)%2==0)
               cnt++;
            n/=10;
        }
        cout<<cnt;
    }

    return 0;
}
