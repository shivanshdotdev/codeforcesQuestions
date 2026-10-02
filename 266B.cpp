#include <iostream>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    string q;
    cin >> q;

    for (int i = 0; i < x; i++){
        for (int j = 0; j < n-1; j++){
            if (q[j] == 'B' && q[j+1] == 'G'){
                q[j] = 'G';
                q[j + 1] = 'B';
                j++;
            }
        }
    }

    cout << q << endl;
}
