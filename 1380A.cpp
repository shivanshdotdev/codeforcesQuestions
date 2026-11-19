#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        int len;
        cin >> len;

        int arr[len];

        for (int i = 0; i < len; i++){
            cin >> arr[i];
        }

        int i, j, k;
        i = 0;
        j = 1;
        k = 2;

        bool found = false;

        while (k < len){
            if (arr[i] < arr[j] && arr[j] > arr[k]){
                found = true;
                break;
            }

            i++;
            j++;
            k++;
        }

        if (found){
            cout << "YES" << endl;
            cout << i+1 << " " << j+1 << " " << k+1 << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
