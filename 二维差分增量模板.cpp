#include<bits/stdc++.h>
using namespace std;
const int N = 1000 + 10;
	int a[N][N],b[N][N];
	int n,m,q;
void insert(int x1,int y1,int x2,int y2,int c){     
    b[x1][y1] += c;
    b[x2 + 1][y1] -= c;
    b[x1][y2 + 1] -= c;
    b[x2 + 1][y2 + 1] += c;
}
int main() {
	
	cin>>n>>m>>q;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			cin>>a[i][j];
			b[i][j] = a[i][j] - a[i-1][j] - a[i][j-1] + a[i-1][j-1];
		}
	}
	while(q--){
		int x1,y1,x2,y2,c;
		cin>>x1>>y1>>x2>>y2>>c;
		insert(x1,y1,x2,y2,c);
	}
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
		a[i][j] = b[i][j] + a[i-1][j] + a[i][j-1] - a[i-1][j-1];
		cout<<a[i][j]<<" ";
	}cout<<endl;
}
	
	return 0;
}
