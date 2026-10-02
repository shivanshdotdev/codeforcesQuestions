#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int sum = 0;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        sum += x;
    }

    double ans = (sum * 1.0) / n;

    cout << ans << endl; 

}

