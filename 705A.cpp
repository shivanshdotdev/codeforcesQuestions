#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    string s = "";

    for (int i = 1; i <= n; i++){
        s += "I ";

        if (i % 2 == 0){
            s += "love ";
        }
        else {
            s += "hate ";
        }

        if (i == n){
            s += "it";
            break;
        }


        s += "that ";
    }

    cout << s << endl;
}
