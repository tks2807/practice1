#include <iostream>
#include <cmath>
using namespace std;

int main() {
double x,y;
cin>>x>>y;
if (x>y){
    cout<<"Yes";
}
else {
    swap(x,y);
    cout<<x<<y;
}



return 0;
}
