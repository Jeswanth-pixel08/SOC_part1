#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
long long modpow(long long a,long long b,long long p){
    long long rem =1;
    while(b){
        if(b&1) rem=(rem*a)%p;
        a=a*a%p;
        b>>=1;
    }
    return rem;
}
int main(){
    int t;
    cin>>t;
    const long long p=1000000007LL;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long sum=0,local=0,global=0;
        vector<long long> v(n);
        for(int i=0;i<n;i++) {cin >> v[i];
            sum+=v[i];
            local=max(local+v[i],v[i]);
            global=max(global,local);
        }
        long long ans_sum = sum + (global%p)*(modpow(2LL,(long long)k,p)-1);
        long long ans= ((ans_sum%p)+p)%p;
        cout << ans<<endl;
}
}