#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    char n;
    cin >> n;

    string s;
    cin >> s;

    unordered_map<char, char> R = {
        {'w', 'q'},
        {'s', 'a'},
        {'x', 'z'},
        {'e', 'w'},
        {'d', 's'},
        {'c', 'x'},
        {'r', 'e'},
        {'f', 'd'},
        {'v', 'c'},
        {'t', 'r'},
        {'g', 'f'},
        {'b', 'v'},
        {'y', 't'},
        {'h', 'g'},
        {'n', 'b'},
        {'u', 'y'},
        {'j', 'h'},
        {'m', 'n'},
        {'i', 'u'},
        {'k', 'j'},
        {',', 'm'},
        {'o', 'i'},
        {'l', 'k'},
        {'.', ','},
        {'p', 'o'},
        {';', 'l'},
        {'/', '.'}
    };

    unordered_map<char, char> L = {
        {'q', 'w'},
        {'a', 's'},
        {'z', 'x'},
        {'w', 'e'},
        {'s', 'd'},
        {'x', 'c'},
        {'e', 'r'},
        {'d', 'f'},
        {'c', 'v'},
        {'r', 't'},
        {'f', 'g'},
        {'v', 'b'},
        {'t', 'y'},
        {'g', 'h'},
        {'b', 'n'},
        {'y', 'u'},
        {'h', 'j'},
        {'n', 'm'},
        {'u', 'i'},
        {'j', 'k'},
        {'m', ','},
        {'i', 'o'},
        {'k', 'l'},
        {',', '.'},
        {'o', 'p'},
        {'l', ';'},
        {'.', '/'}
    };

    int sz = s.length();

    if (n == 'L'){
        for (int i = 0; i < sz; i++){
            s[i] = L[s[i]];
        }
    }
    else {
        for (int i = 0; i < sz; i++){
            s[i] = R[s[i]];
        }
    }

    cout << s << endl;
}
