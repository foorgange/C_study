#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[100000];
	int b;
	int n;
	cin>>n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	for(int i = 0;i<n;i++){
		memset(a, 0, sizeof(a));
		cin.getline(a,100000);
		b = strlen(a);
		if(b == 0) continue;
		if(a[0]>='A'&&a[0]<='Z'){
			a[0] = a[0]+32;
		}
		if(b>1&&a[b-1]>='A'&&a[b-1]<='Z'){
			a[b-1] = a[b-1]+32;
		}
		for(int m = 1; m < b- 1; m++){
            if(a[m] >= 'a' && a[m] <= 'z'){
                a[m] = a[m] - 32;
            }
        }
		
		for(int x = 0;x<b-2;x++){
			if((a[x]=='g'||a[x]=='G')&&(a[x+1]=='e'||a[x+1]=='E')&&(a[x+2]=='m'||a[x+2]=='M')){
				a[x]='G';
				a[x+1]='E';
				a[x+2]='M';
			}
		}
		
		
		for(int j = 0;j<b;j++){
			cout<<a[j];
		}
		cout<<endl;
		
		
	}
	

	return 0;
}

