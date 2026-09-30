#include <iostream>
#include <string>
using namespace std;

int main(){
    int x = 0;
    int n;
    cin >> n;

    string opr;
    for (int i = 0; i < n; i++){
        cin >> opr;
        if (opr[1] == '+'){
            x++;
        }
        else{
            x--;
        }
    }

    cout << x;
}
