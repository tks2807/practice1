#include <iostream>
#include <cmath>
using namespace std;

int main() {
double x;
cin>>x;
if (x==1 || x==2 || x==12 ){
    cout<<"winter";
}
else if (x==3 || x==4 || x==5 ){
    cout<<"Spring";
}
else if (x==6 || x==7 || x==8 ){
    cout<<"Summer";
}
else if (x==9 || x==10 || x==11 ){
    cout<<"Autumn";
}
else {
    cout<<"error";
}




return 0;
}
