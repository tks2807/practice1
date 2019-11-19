#include <iostream>
#include <cmath>
using namespace std;

int main() {
double x;
cin>>x;
if (5>=x && x>=2){
    cout<<x+10;
}
else if (40>=x && x>=7){
    cout<<x-100;
}
else if (0>=x && x>=3000){
    cout<<3*x;
}
else {
    x=0;
    cout<<x;
}



return 0;
}
