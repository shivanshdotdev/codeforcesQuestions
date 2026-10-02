#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a, b;
    int increments;

    for (int i = 0; i < n; i++){
        increments = 0;
        cin >> a >> b;

        while (a % b != 0){
            a++;
            increments++;
        }

        cout << increments << endl;
    }
}


