#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[110];
    cin.getline(a, 105);
    int m = strlen(a);
    bool isPalindrome = true;
    
    for (int i = 0; i < m / 2; i++) {
        if (a[i] != a[m - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    
    if (isPalindrome) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}
