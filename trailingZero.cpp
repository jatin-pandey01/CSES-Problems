#include<bits/stdc++.h>
using namespace std;
#define lli long long int


int main(){
    lli n;
    cin>>n;
    lli count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
    cout<<count<<endl;
}