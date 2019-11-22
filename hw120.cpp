#include <iostream>
using namespace std;

int main()
{
int n, a;
cin >> n;
a = 0;
while (n) {
if (n%10>a) a=n% 10;
n /= 10;
}
cout<<a;

return 0;
}
