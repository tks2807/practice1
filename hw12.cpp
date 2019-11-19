#include <iostream>
#include <cmath>
using namespace std;

int main() {
double a = 0.1;
double b = 0.2;
int x = 1;
double ans;

ans=pow((x*x+b), 0.2)-(b*b*pow(sin(x+a),3))/x;
cout<<ans;

return 0;
}
