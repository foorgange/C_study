#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[1200];
	int x = 0;
	cin.getline(a,1150);
	int b = strlen(a);
	for(int i = 0;i<b;i++){
		x = 0; 
		for(int j = i+1;j<b;j++){
			if( a[i]== a[j]){
				x = 1;
			}
		}
		if(x == 0){
			cout<<a[i];
			return 0;
		}
	}
	cout<<"no";
	

	return 0;
}