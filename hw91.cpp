#include <iostream>
#include <cmath>
using namespace std;
int main() {
double x = 0.0;
for (int i = 2; i <10; i += 1) {
 x= x+(double(i)/double(i+1));
}
cout<<x;
return 0;
}
