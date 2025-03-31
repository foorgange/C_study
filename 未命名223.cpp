#include<bits/stdc++.h>
using namespace std;
int n,a,b,c;
int ccc = -1;
map <int,int> mp;
mp[1]= 0;
mp[2] = 1;
void zisu(int x){
	if(x==1)return;
	if(x==2)return;
	for(int i = 2;i<x;i++){
		if(x%i==0){
		mp[x] = false; 
		return;}
	}
	mp[x] = true;
	return;
	
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); 
	cin>>n;
	for(int i = 2;i<n/2;i++){
		zisu(i);
	}
	for(int i = 2;i<n;i++){
		if(mp[i]){
			a = i;
			int m = n-i;
			for(int j = 2;j<m;j++){
				if(mp[j]&&mp[m-j]){
					b = j;
					c = m-j;
					ccc = 1;
					if(a<=b&&b<=c){
					
					cout<<n<<"="<<a<<"+"<<b<<"+"<<c<<endl;
					}
					if(b>c){
						break;
						
					}
				}
			}
			
		}
		if(i>n/2){
			break;
		}
	}
	if(ccc == -1)cout<<-1<<endl;
	
	
	return 0;
}
