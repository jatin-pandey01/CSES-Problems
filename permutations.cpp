#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	if(n>=4){
		for(int i=2;i<=n;i+=2){
			cout<<i<<" ";
		}
		for(int i=1;i<=n;i+=2){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	else{
		if(n == 1) cout<<1<<endl;
		else
		cout<<"NO SOLUTION"<<endl;
	}
}