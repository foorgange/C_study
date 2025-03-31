#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[270];
	cin.getline(a,260);
	int b = strlen(a);
	int num = 0;
	for(int i =0;i <b;i++){
		if(a[i]>='0'&&a[i]<='9'){
			num++;
		}
	}
	cout<<num;

	return 0;
}