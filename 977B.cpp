#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    unordered_map<string, int> hash;

    string key;
    key.push_back(s[0]);

    for (int i = 1; i < n; i++){
        key.push_back(s[i]);

        if (hash.contains(key)){
            hash[key]++;
        }
        else{
            hash[key] = 1;
        }

        key.erase(0, 1);
    }

    int maxFreq = 0;
    string ans;
    for (auto x : hash){
        if (x.second > maxFreq){
            maxFreq = x.second;
            ans = x.first;
        }
    }

    cout << ans << endl;

}
