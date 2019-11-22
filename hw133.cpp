#include <iostream>
using namespace std;
int main () {
    int a,b;
    int tmp=0;
cin>>a>>b;
bool chk=true;

    for (int i=1; i<=a ; i++) {
        tmp=tmp+i;
        if (tmp==b) {
            chk=false;
            break;
        }
    }
if (chk==true){        cout<<"error";
    }
    else{
        cout<<"exist";
    }
    return 0;
}
