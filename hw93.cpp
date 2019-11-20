#include <iostream>
#include <cmath>
using namespace std;
int main () {
   int n;
   cin >> n;
   int x =0;
   for (int i = 0; i<=n; i++){
    x = x+(i*i);
   }
   cout<<x;
}
