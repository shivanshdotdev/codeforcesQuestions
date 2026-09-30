#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    string input;
    cin >> input;

    char prev = input[0];
    char curr;
    int count = 0;

    for (int i = 1; i < n; i++){
        curr = input[i];
        if (prev == curr){
            count++;
        }
        else{
            prev = curr;
        }
    }

    cout << count;
}
