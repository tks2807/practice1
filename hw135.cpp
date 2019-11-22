#include <iostream>
#include <cstdlib>
using namespace std;
int main () {
    int tmp=0;
    int r;
    while (tmp<=10) {
        int a=rand()%2;
        cout<<a<<" ";
        tmp=tmp+a;
    }
    return 0;
}
