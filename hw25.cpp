#include <iostream>
#include <cmath>
using namespace std;

int main() {
double a,b,tmp;
cin>>a>>b;
tmp = a;
a = b;
b = tmp;

cout<<a<<"\n"<<b;

return 0;
}
