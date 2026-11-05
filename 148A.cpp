#include <iostream>
#include <vector>
using namespace std;

int main(){
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    vector<int> arr(d+1, 0); // because array initialization with all 0 elements with runtime size is not allowed hence vector is used 

    for (int i = k; i <= d; i+=k){
        arr[i] = 1;
    }
    for (int i = l; i <= d; i+=l){
        arr[i] = 1;
    }
    for (int i = m; i <= d; i+=m){
        arr[i] = 1;
    }
    for (int i = n; i <= d; i+=n){
        arr[i] = 1;
    }

    int count = 0;
    for (int i : arr){
        if (i == 1){
            count++;
        }
    }

    cout << count << endl;

}
