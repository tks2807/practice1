#include <iostream>
using namespace std;
int main(){

    double n;
    double x=0;

    cin>>n;

    for(int i = 1;i<=n;++i){

        x = 1/double(i)+x;

    }

    cout<<x;





return 0;
}
