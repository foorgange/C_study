#include<bits/stdc++.h>
using namespace std;

int main() {
    int l, r;
    cin >>l>>r;

    int t = 0;
    for(int i = l; i <= r; i++){
        int num = i; 
        while(num > 0){
            if(num % 10 == 1){
                t++;
            }
            num /= 10;
        }
    }

    cout <<t;
    return 0;
}
