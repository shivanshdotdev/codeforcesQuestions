#include <iostream>
#include <numeric>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    if (n < 26){
        cout << "NO" << endl;
        return 0;
    }

    int hash[26] = {0};

    for (int i = 0; i < n; i++){
        char x = s[i];

        if (x >= 65 && x <= 90){
            x += 32;
        }

        if (hash[x - 97] == 0){
            hash[x - 97]++;
        }

    }

    int sum = accumulate(hash, hash+26, 0);

    if (sum == 26){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    
}
