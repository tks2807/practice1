#include <iostream>
#include <cmath>
using namespace std;

int main() {
double sum,prc,ans;
cin>>sum>>prc;
ans = sum*pow(1+0.01*prc, 5);

cout<<ans;

return 0;
}
