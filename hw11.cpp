#include <iostream>
#include <cmath>
using namespace std;

int main() {
double x = 3.6;
double e = 2.71828;
double ans;

ans=pow(e, x-2)+abs(sin(x))-pow(x,4)*cos(1/x);
cout<<ans;

return 0;
}
