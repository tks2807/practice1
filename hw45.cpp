#include <iostream>
#include <cmath>
using namespace std;

int main() {
int x,y,z;
cin>>x>>y>>z;
if (x%5==0 && y%5==0 && z%5==0){
    cout<<x+y+z;
}
else if (x%5==0 && y%5==0){
    cout<<x+y;
}
else if (x%5==0 && z%5==0){
    cout<<x+z;
}
else if (y%5==0 && z%5==0){
    cout<<y+z;
}
else if (x%5==0){
    cout<<x;
}
else if (y%5==0){
    cout<<y;
}
else if (z%5==0){
    cout<<z;
}
else {
    cout<<"error";
}






return 0;
}
