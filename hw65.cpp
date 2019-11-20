#include <iostream>
#include <algorithm>
using namespace std;

int main() {
int a,b,n1,n2,n3,z1,z2,z3;
cin>>a>>b;

n1=a/100%10;
n2=a/10%10;
n3=a%10;
z1=b/100%10;
z2=b/10%10;
z3=b%10;
cout<<(a-n3)*10+(b-z3)/10;




return 0;
}
