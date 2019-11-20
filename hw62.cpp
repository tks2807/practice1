#include <iostream>
using namespace std;

int main() {
int a,n1,n2,n3,n4,n5;
cin>>a;
n1=a/10000%10;
n2=a/1000%10;
n3=a/100%10;
n4=a/10%10;
n5=a%10;
n2=0;
n4=0;
cout<<n1<<n2<<n3<<n4<<n5;
return 0;
}
