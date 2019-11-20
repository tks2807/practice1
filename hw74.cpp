#include <iostream>
using namespace std;
int main()
{
int a,b,c;
cin >> a;
b = (a-1)/20+ 1;
c = ((a-1)%20)/2;
cout <<(a%2)*b+((a+1)%2)*c;
return 0;
}
