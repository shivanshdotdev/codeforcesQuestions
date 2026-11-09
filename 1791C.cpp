#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        int n;
        cin >> n;

        string s;
        cin >> s;

        int l = 0;
        int r = n - 1;

        while (l < r){
            if (s[l] == s[r]){
                break;
            }

            l++;
            r--;
            n -= 2;
        }

        cout << n << endl;
    }
}
