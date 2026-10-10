#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;

    char arr[] = {'h', 'e', 'l', 'l', 'o'};
    int i = 0;

    for (char c : s){
        if (c == arr[i]){
            i++;
        }
    }

    if (i == 5){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

}
