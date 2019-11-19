#include <iostream>
#include <cmath>
using namespace std;

int main() {
double x,y,ans;
cin>>x>>y;
if (!(x<0 || y<0 || x-sqrt(y)<0)){
    ans = sqrt(x-sqrt(y));
    cout<<ans;
}

return 0;
}
