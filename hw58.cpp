#include <iostream>
using namespace std;

int main(){
int a,m,c,a1,m1,c1;
cin>>a>>m>>c>>a1>>m1>>c1;
if ((m>0 && m<13)&&(m1>0 && m1<13)){
    if (((m==1) && (m==3) && (m==5) && (m==7) && (m==8) && (m==10) && (m==12))&&((m1==1) && (m1==3) && (m1==5) && (m1==7) && (m1==8) && (m1==10) && (m1==12))){
        if ((a>0 && a<32)&&(a1>0 && a1<32)){
            if (c>c1){
                cout<<"yes";
            }
            if (c<c1){
                cout<<"no";
            }
            if (c==c1){
                if(m>m1){
                  cout<<"yes";
                }
                if(m<m1){
                  cout<<"no";
                }
                if(m==m1){
                  if(a>a1){
                    cout<<"yes";
                  }
                  if(a<a1){
                    cout<<"no";
                  }
                  if(a==a1){
                    cout<<"equal date";
                  }
                }
            }
        }
        else {
            cout<<"error";
        }
    }
    if ((m==4 && m==6 && m==9 && m==11)&&(m1==4 && m1==6 && m1==9 && m1==11)){
        if ((a>0 && a<31)&&(a1>0 && a1<31)){
             if (c>c1){
                cout<<"yes";
            }
            if (c<c1){
                cout<<"no";
            }
            if (c==c1){
                if(m>m1){
                  cout<<"yes";
                }
                if(m<m1){
                  cout<<"no";
                }
                if(m==m1){
                  if(a>a1){
                    cout<<"yes";
                  }
                  if(a<a1){
                    cout<<"no";
                  }
                  if(a==a1){
                    cout<<"equal date";
                  }
                }
            }
        }
        else {
            cout<<"error";
        }
    }
    if ((m==2)&&(m1==2)){
        if ((a>0 && a<29)&&(a>0 && a<29)){
            if (c>c1){
                cout<<"yes";
            }
            if (c<c1){
                cout<<"no";
            }
            if (c==c1){
                if(m>m1){
                  cout<<"yes";
                }
                if(m<m1){
                  cout<<"no";
                }
                if(m==m1){
                  if(a>a1){
                    cout<<"yes";
                  }
                  if(a<a1){
                    cout<<"no";
                  }
                  if(a==a1){
                    cout<<"equal date";
                  }
                }
            }
        }
        else {
            cout<<"error";
        }
    }
}
else {
    cout<<"error";
}
return 0;
}
