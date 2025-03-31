#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	int n[N+1] = {0};
	for(int j = 1;j<=N;j++){
	
	for(int i = 1; i<=N;i++){
		if(i%j ==0){
			if(n[i] == 0){
				n[i] = 1;
			}else{
				n[i] = 0;
			}
		}
	}
}
for(int i = 1 ;i<=N;i++){
	if(n[i] ==1){
		cout<<i<<" ";
	}
}
	
	
	return 0;
}