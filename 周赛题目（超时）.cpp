
#include<iostream>
using namespace std;
int main(){
	int x,n;
	int num = 0;
	cin>>x>>n;
	int dy[100] ;
for (int i = 0; i < 100; i++) {
    dy[i] = 1;  
}

	dy[6] = 0;
	dy[7] = 0;
	for(int j = 1;j<13;j++){
		dy[6+7*j] = 0;
		dy[7+7*j] = 0;
	}
	for(;x<=n;x++){
		num += dy[x]*250;
	}
	
	cout<<num;
	
	return 0;
}
//循环加if语句做判断即可，数组超时。

/*

#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, n;
    int num = 0;

    cin >> x >> n;

    for (int i = 0; i < n; i++) {
        int day = (x + i - 1) % 7 + 1;
        if (day != 6 && day != 7) {
            num += 250;
        }
    }

    cout <<num;
    */