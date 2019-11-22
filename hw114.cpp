#include <iostream>
#include <cmath>
using namespace std;


int main()
{
for ( int i = 1 ;i<=30;i++)
{
if ( i % 2 != 0)
        {
for ( int j = 1 ;j<=i;j++)
            {
                cout<<j;
            }
            cout<<endl;
        }
        else if (i%2 == 0)
        {
            cout<<11111<<endl;
        }
    }
    return 0;
}
