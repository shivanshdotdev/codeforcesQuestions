#include <iostream>
using namespace std;

int main(){
    string guest_name, host_name, pile;
    cin >> guest_name >> host_name >> pile;

    int total_letters = guest_name.size() + host_name.size();

    if (total_letters != pile.size()){
        cout << "NO" << endl;
        return 0;
    }

    int required[26] = {0};

    for (char x : guest_name){
        required[x - 65]++;
    }

    for (char x : host_name){
        required[x - 65]++;
    }


    int exist[26] = {0};

    for (char x : pile){
        exist[x - 65]++;
    }

    for (int i = 0; i < 26; i++){
        if (required[i] != exist[i]){
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    
}
