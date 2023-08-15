#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000000+7

lli solve(lli a, lli b){
    if(b == 0) return 1;
    if(b == 1) return a;
    lli ans = solve(a,b/2);
    if(b%2) return ((ans * ans *a)%(mod));
    else return ((ans * ans)%(mod));
}


int main(){
    lli n;
    cin>>n;
    // lli ans = solve(2,n);
    // cout<<ans<<"\n";
    cout<< solve(2,n)<<endl;
}