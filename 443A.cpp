#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    char s;
    cin >> s;

    unordered_set<char> set;

    while (s != '}'){
        if (s != ','){
            set.insert(s);
        }
        cin >> s;
    }

    cout << set.size() - 1 << endl;
}
