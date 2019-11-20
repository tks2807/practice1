#include <iostream>
#include <cmath>
using namespace std;

int main() {
int a,b,c,D;
double x1,x2;
cin>>a>>b>>c;
cout<<a<<"x^2+"<<b<<"x+"<<c<<endl;
D=b*b-4*a*c;
if (D>0){
    x1=(-b+sqrt(D))/(2*a);
    x2=(-b-sqrt(D))/(2*a);
    cout<<x1<<endl<<x2;
}
if (D==0){
    x1=-b/(2*a);
    cout<<x1;
}
if (D<0){
    cout<<"error";
}



return 0;
}
