#include <iostream>
using namespace std;

int main() {
int a,n1,n2,n3,n4,mx,mn;
cin>>a;
n1=a/1000%10;
n2=a/100%10;
n3=a/10%10;
n4=a%10;

mx=max(max(n1,n2),max(n3,n4));
mn=min(min(n1,n2),min(n3,n4));

if (n1==mx && n2==mn){
    cout<<n2<<n1<<n3<<n4<<endl;
}
if (n1==mx && n3==mn){
    cout<<n3<<n2<<n1<<n4<<endl;
}
if (n1==mx && n4==mn){
    cout<<n4<<n2<<n3<<n1<<endl;
}
if (n2==mx && n1==mn){
    cout<<n2<<n1<<n3<<n4<<endl;
}
if (n2==mx && n3==mn){
    cout<<n1<<n3<<n2<<n4<<endl;
}
if (n2==mx && n4==mn){
    cout<<n1<<n4<<n3<<n2<<endl;
}
if (n3==mx && n1==mn){
    cout<<n3<<n2<<n1<<n4<<endl;
}
if (n3==mx && n2==mn){
    cout<<n1<<n3<<n2<<n4<<endl;
}
if (n3==mx && n4==mn){
    cout<<n1<<n2<<n4<<n3<<endl;
}
if (n4==mx && n1==mn){
    cout<<n4<<n2<<n3<<n1<<endl;
}
if (n4==mx && n2==mn){
    cout<<n1<<n4<<n3<<n2<<endl;
}
if (n4==mx && n3==mn){
    cout<<n1<<n2<<n4<<n3<<endl;
}
return 0;
}
