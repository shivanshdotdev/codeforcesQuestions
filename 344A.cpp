#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    string prev;
    string curr;
    int count = 0;

    cin >> prev;

    for (int i = 1; i < n; i++){
        cin >> curr;

        if (prev != curr){
            count++;
        }

        prev = curr;
    }

    cout << ++count << endl;
}
