#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        string s;
        cin >> s;

        unordered_set<char> hash;
        for (char c : s){
            hash.insert(c);
        }

        if (hash.size() == 1){
            cout << "NO" << endl;
        }
        else {
            for (int i = 0; i < s.size() - 1; i++){
                if (s[i] != s[i + 1]){
                    char c = s[i];
                    s[i] = s[i + 1];
                    s[i + 1] = c;
                    break;
                }
            }

            cout << "YES\n" << s << endl;
        }
    }
}
