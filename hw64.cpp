#include <iostream>
using namespace std;

int main() {
int a,z1,z2,z3,z4;
cin>>a;
z1=a/1000%10;
z2=a/100%10;
z3=a/10%10;
z4=a%10;
if (z1==z4 && z2==z3){
    cout<<"yes";
}
else {
    cout<<"no";
}



return 0;
}
