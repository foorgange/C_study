#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int sum[N],a[N];
int n,m;
int  l,r;

int main() {
	
	cin>>n>>m;
	
	for(int i = 1;i<=n;i++){
		cin>>a[i];
		sum[i] = sum[i-1] + a[i];
	}
	for(int i = 1;i<=m;i++){
		cin>>l>>r;
		cout<<sum[r] - sum[l-1]<<endl;
	}
	
	return 0;
}


