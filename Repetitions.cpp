#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int cnt = 1;
	string s;
	cin>>s;
	int i=0;
	while(i<s.size()){
		int j=i+1;
		while(j<s.size() && s[i] == s[j]){
			j++;
		}
		int count = j-i;
		cnt = max(cnt,count);
		i = j;
	}
	cout<<cnt<<endl;
}