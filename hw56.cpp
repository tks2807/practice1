#include <iostream>
using namespace std;

int main(){
int a,b;
cout<<"Vvedi naprav 11-S 12-Z 13-YUG 14-V";
cout<<"Vvedi comand 0-prod 1-left -1-right";
cin>>a>>b;
if (a+b==10 || a+b==12){
    cout<<"Zapad";
}
else if (a+b==13 || a+b==15){
    cout<<"Yug";
}
else if (a+b==11){
    cout<<"Sever";
}
else if (a+b==14){
    cout<<"Vostok";
}
else {
    cout<<"error";
}


return 0;
}
