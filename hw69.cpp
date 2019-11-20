#include <iostream>
#include <cmath>
using namespace std;

int main() {
int a,b,c;
double p,S;
cin>>a>>b>>c;
if (a+b>c || a+c>b || b+c>a){
    p=(a+b+c)/2;
    S=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<S;
}
else {
    cout<<"error";
}



return 0;
}
