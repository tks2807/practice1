#include <iostream>
using namespace std;

int main()
{

    int n,a;
    cin >> n;

    for(int i = 1;i < n;i++){
        a = 0;
        for(int j = 1;j < n;j++){
            if((i%j == 0) && (j != i)){
        a=a+j;
        if(i == a){
                 cout << i<< endl;
            }
        }

    }
    }

    return 0;
}
