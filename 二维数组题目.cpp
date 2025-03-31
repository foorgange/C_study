#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i= 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cin>>a[i][j];
		}
	}
	long long x = 0;
	if(n==1 && m==1){
    	x = a[0][0];
    }else if(n== 1){
        x = a[0][0]+a[0][m-1];
    }else if(m == 1){
        x=a[0][0] + a[n-1][0];
    }else{
        x = a[0][0] +a[0][m-1] + a[n-1][0] + a[n-1][m-1];
    }
  cout<<x;

	return 0;
}