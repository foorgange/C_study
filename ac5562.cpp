#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
typedef long long LL;
long long n,k;
long long  a[N],b[N];
int mid;
bool check(int mid){
	LL res = 0;
	for(int i = 1;i<=n;i++){
		LL need = (LL)mid *a[i];
		if(need>b[i]){
			res += need - b[i];
			if(res>k){
				return false;
			}
		}
	}
	return true;
	
}
int main() {
	cin>>n>>k;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	for(int i = 1;i<=n;i++){
		cin>>b[i];
	}
	
	int l = 1,r = 2e9;
	
	while(l<=r){
		 mid = (l+(LL)r)/2;
		if(check(mid)){
			l = mid +1;
		}else{
			r = mid -1;
		}
	}
	cout<<r<<endl;
	
	return 0;
}
