#include <iostream>
using namespace std;

int main(){
int a,m,c;
cin>>a>>m>>c;
if (m>0 && m<13){
    if ((m==1) && (m==3) && (m==5) && (m==7) && (m==8) && (m==10) && (m==12)){
        if (a>0 && a<32){
            cout<<"yes";
        }
        else {
            cout<<"no";
        }
    }
    if (m==4 && m==6 && m==9 && m==11){
        if (a>0 && a<31){
            cout<<"yes";
        }
        else {
            cout<<"no";
        }
    }
    if (m==2){
        if (a>0 && a<29){
            cout<<"yes";
        }
        else {
            cout<<"no";
        }
    }
}
else {
    cout<<"no";
}



return 0;
}
