#include <iostream>

using namespace std;

int main() {
int n;
cin>>n;
for (int i = 1; i < n + 1; i++)
{
if (i%2==0){
    cout<<"****";
}
else {
    cout<<"*******";
}
cout<<endl;
}

return 0;
}
