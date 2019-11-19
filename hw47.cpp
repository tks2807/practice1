#include <iostream>
#include <cmath>
using namespace std;

int main() {
int x,y,z;
cin>>x>>y>>z;
if (x+y>x+z && x+y>y+z){
    cout<<x<<y;
}
if (y+z>x+y && y+z>x+z){
    cout<<y<<z;
}
if (z+x>x+y && z+x>y+z){
    cout<<z<<x;
}







return 0;
}
