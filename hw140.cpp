#include<iostream>
using namespace std;
int main(){
    int n,a,i;
    cin>>n;
    for(a=1;a<n;++a){
        for(i=2;i<a;i++){
            if(a%i==0){
                continue;
            }
        }
        if(i==a)
            cout<<a<<" ";

        }

        return 0;
        }
