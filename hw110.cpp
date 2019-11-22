#include <iostream>

using namespace std;

int main() {
int n,m;
cin>>n;
cin>>m;
for (int i = 1; i < n+1; i++)
{
if (i%2==0){
    for (int j=0;j<m;j++ ){
        cout<<"BBBAAA";
    }
}
else {
    for (int j=0;j<m;j++ ){
        cout<<"AAABBB";
    }
}
cout<<endl;
}

return 0;
}
