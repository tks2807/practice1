#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,n;
int p =1;
cin>>a>>n;
for (int i =1;i<=n;i++){
    p=p*pow((a+i),2);
}
cout<<p;




return 0;
}
