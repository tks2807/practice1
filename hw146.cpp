#include <iostream>
using namespace std;
int main() {
    int cnt = 0;
    for (char i='a'; i<='z'; i++) {
        if(cnt%5==0 && cnt!=0)
        	cout<<endl;
	cout<<char(-32+i)<<i<<' ';
        ++cnt;
    }
    return 0;
}
