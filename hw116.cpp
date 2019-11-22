#include <iostream>
using namespace std;


int main()
{
    int x,y ;
    cin>>x>>y;

    for (int i = x; i<=y;i++ )
    {
        if (i%12 == 0 )
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
