#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    string input;
    cin >> input;

    int a_count = 0, d_count = 0;

    for (int i = 0; i < n; i++){
        if (input[i] == 'A'){
            a_count++;
        }
        else if (input[i] == 'D'){
            d_count++;
        }
    }

    if (a_count > d_count){
        cout << "Anton";
    }
    else if (a_count < d_count){
        cout << "Danik";
    }
    else {
        cout << "Friendship";
    }
}
