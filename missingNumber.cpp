#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	map<int,bool> mapping;
	for(int i=1;i<n;i++){
		int a;
		cin>>a;
		mapping[a] = true;
	}
	for(int i=1;i<=n;i++){
		if(!mapping[i]) cout<<i<<endl;
	}
    return 0;
}
