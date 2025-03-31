#include <bits/stdc++.h>

using namespace std;

void f(string s,int num[]){
    int len = s.size();
    int idx = 0; 
    int qw = 0; 
    for (int i = len - 1; i >= 0; i--) {
        if (s[i] == '.') 
        {
            idx++;
            qw = 0; 
        } 
        else
        {
            int tmp = s[i] - '0';
            num[idx] += tmp * pow(10, qw); 
            qw++;
        }
    }
}


string c(int n) 
{
    string bi = "";
    for (int i = 0; i < 8; ++i) 
    {
        bi += to_string(n % 2);
        n /= 2;
    }
    reverse(bi.begin(), bi.end()); 
    return bi;
}

int main()
{
 string s;
    cin >> s;
    int start = 0;
    for(int i = s.size() - 1;i >= 0;i --)
    {
        if(s[i] == '.')
        {
            start = i;
            break;
        }
    }
    int qq = 0;
    int ci = 0;
    int j = 0; 
    int po = 0;
    for(int i = s.size() - 1;i >= 0;i -- )
    {
        if(s[i] == '/') 
        {
            j = po;
            break;
        }
        ci += (s[i] - '0') * pow(10,qq);
        qq ++;
        po ++;
    }
    int num[4] = {0}; 
    int idx = 0;
    int qw = -1;
    for(int i = j - 1;i >= 0;i -- )
    {
        if(s[i] != '.') qw ++;
        if(s[i] == '.')
        {
            qw = -1;
            idx ++;
            continue; 
        }
        int tmp = s[i] - '0';
        num[idx] += tmp * pow(10,qw);
    }
    
    string re;
    string one = c(num[2]);
    string two = c(num[1]);
    string three = c(num[0]);
    string total1 = one + two + three;
    int n;
    cin >> n;
    while(n--) 
    {
        string ss;
        cin >> ss;
        int sum[4] = {0};
        f(ss,sum);
        string o = c(sum[3]);
        string t = c(sum[2]);
        string th = c(sum[1]);
        string total2 = o + t + th;
        bool flag = true;
        for(int i = 0;i < ci;i ++ )
        {
            if(total1[i] != total2[i])
            {
                cout << "NO" <<endl;
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES" <<endl;
    }

    return 0;
}
