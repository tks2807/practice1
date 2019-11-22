#include <iostream>
using namespace std;
int main() {
    int n,x;
    cin >> n>>x;
        for (int i = 1; i < n; i++) {

        for (int i = 2; i < x; i++ ) {
        if (i%2==0 && i%3==0 && i%5==0 && i%7==0) {
       continue;
        } else {
             cout << "Pair:" << i << ' ' << i + 2 << endl;
        }
    }




        }
return 0;
}
