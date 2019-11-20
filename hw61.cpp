#include <iostream>
using namespace std;

int main() {
int a,n1,n2,n3,n4;
cin>>a;
n1=a/1000%10;
n2=a/100%10;
n3=a/10%10;
n4=a%10;

if (n1==n2 || n1==n3 || n1==n4 || n2==n3 || n2==n4 || n3==n4){
    cout<<"yes";
}
else {
    cout<<"no";
}

return 0;
}
