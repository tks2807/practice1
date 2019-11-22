#include <iostream>
using namespace std;
int main() {
    char c;
    cin>>c;
    if (c>='A' && c<='Z'){
        c=c+32;
    }
    if(c=='x'){
         cout<<"yza";
    }
    else if(c=='y'){
         cout<<"zab";
    }
    else if(c=='z'){
         cout<<"abc";
    }
    else{
         cout<<char(c+1)<<char(c+2)<<char(c+3)<<endl;
    }
    return 0;
}
