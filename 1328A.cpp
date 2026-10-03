#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a, b;
    int increments;

    for (int i = 0; i < n; i++){
        cin >> a >> b;
        
        if (a % b == 0){
            increments = 0;
        }
        else if (a < b){
            increments = b - a;
        }
        else {
            increments = b - (a % b);
        }

        cout << increments << endl;
    }
}


