#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int count = 0;
    int array[n];

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    

    int key = array[k-1];

    if (array[0] == 0 && key == 0){
        cout << count;
        return 0;
    }

    for (int i = 0; i < n; i++){
        if (array[i] >= key && array[i] != 0){
            count++;
        }
        else{
            break;
        }
    }

    cout << count;

}
