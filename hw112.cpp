#include <iostream>
using namespace std;

int main() {
int n = 10;

for(int i=0; i<n; i++) {
  for(int j=0; j<n; j++){
    if (i==j || i+j==n-1){
       cout<<"0";
    }
    else{
       cout <<"1";
    }

}
 cout << endl;
}

return 0;
}
