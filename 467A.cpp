#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count = 0;
    int p, q;

    for (int i = 0; i < n; i++){
        cin >> p >> q;
        if (q-2 >= p){
            count++;
        }
    }

    cout << count << endl;
}
