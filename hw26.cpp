#include <iostream>
#include <cmath>
using namespace std;

int main() {
double a,b,c;
cin>>a>>b>>c;
a = a+b;
b = c-a+b;
c = a+c;
cout<<a<<"\n"<<b<<"\n"<<c;

return 0;
}
