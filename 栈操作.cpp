#include<bits/stdc++.h>
using namespace std;
int main() {
	stack<int> a;
	int m;
	cin>>m;
	string aa;
	for(int i = 0;i<m;i++){
		cin>>aa;
		if(aa=="push"){
			int x;
			cin>>x;
			a.push(x);
		}else if(aa=="pop"){
			a.pop();
		}else if(aa=="empty"){
			if(a.empty()){cout<<"YES"<<endl;
			}else{cout<<"NO"<<endl;}
		}else if(aa=="query"){
			cout<<a.top()<<endl;
		}
	}
	
	return 0;
}