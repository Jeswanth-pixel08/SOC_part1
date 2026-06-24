#include<iostream>
using namespace std;
int main(){
int a,b;
cin >>a>>b;
int n=0;
while(a>0&&b>0){
    if(a==1&&b==1){
        n=0;
        break;
    }
    if(a>b){
        int temp=b;
        b=a;
        a=temp;
    }
    a+=1;
    b-=2;
    n++;
}
cout<<n;
}