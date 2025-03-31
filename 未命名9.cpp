#include<bits/stdc++.h>

#define CLOSE ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
using namespace std;
int n;
const int N = 1e6 + 10;
struct AA{
	int F;
	int S;
	int x;
};

AA a[N];
int b[N];
int cnt = 0;
bool cmp(AA a,AA b){
	if(a.F!=b.F){
		return a.F<b.F;
	}else{
		return a.S<b.S;
	}
}
int main() {
	CLOSE
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i].F>>a[i].S;
		a[i].x = i;
	}
	sort(a+1,a+1+n,cmp);
	
	for(int i = 1;i<=n;i++){
		if(cnt>=a[i].F&&cnt<=a[i].S){
			cnt++;
			b[cnt] = a[i].x;
			
		}
	}
	cout<<cnt<<endl;
	for(int i = 1;i<=cnt;i++){
		cout<<b[i]<<" ";
	}
	
	return 0;
}
