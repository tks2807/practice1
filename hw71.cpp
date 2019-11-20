#include <iostream>
#include <cmath>
using namespace std;

int main() {
int a,b;
double x;
cin>>a>>b;
if (a>0 && a<13 && b>0 && b<60){
    a -=12;
    x = abs(360/12*a+0.5*b-360/60*b);
    cout<<x;
    }

else {
    cout<<"error";
}



return 0;
}
