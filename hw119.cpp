#include <iostream>
using namespace std;

int main()
{
    int n1,n2,n3,n4;
 n1 = i%10;
 n2 =  i/10%10;
 n3 = i/100%10;
 n4 =  i/1000%10;
    for ( int i = 1000; i<9999;++i)
    {
if ( n1+n2+n3+n4 == 15 )
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
