#include<bits/stdc++.h>
using namespace std;
int n;
const int N = 1e5+10;
int a[N];
long long sum = 0;
long long s[N];
bool cmp(int a,int b){
	return a>b;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); 
	cin>>n;
	for(int i = 1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,cmp);
    s[n+1] = 0;
    for(int i = n;i>=1;i--){
        s[i] = s[i+1] + a[i];
    }
    for(int i = 1;i<=n;i++){
        sum += (long long)a[i]*(n-i)-s[i+1];
    }
	cout<<2LL*sum<<endl;
	return 0;
}
