#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        int arr[3];
        cin >> arr[0];
        cin >> arr[1];
        cin >> arr[2];
        
        sort(arr, arr+3);
    
        int a = arr[0];
        int b = arr[1];
        int c = arr[2];

        if ((c - 1) == b && (a + 1) == b){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
        


    }
}
