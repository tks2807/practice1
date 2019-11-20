#include <iostream>
using namespace std;

int main(){

int a,b,c;
int ans = 0;
cin>>a>>b>>c;
if (a>0){
    ans++;
}
if (b>0){
    ans++;
}
if (c>0){
    ans++;
}
cout<<ans;

return 0;
}
