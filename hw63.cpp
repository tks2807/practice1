#include <iostream>
using namespace std;

int main() {
int a,b,z1,z2,z3,ans;
cin>>a>>b;
z1=b/100%10;
z2=b/10%10;
z3=b%10;
cout<<a*1000+z1*100+z2*10+z3;



return 0;
}
