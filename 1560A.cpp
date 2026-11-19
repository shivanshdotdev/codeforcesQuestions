#include <iostream>
using namespace std;

bool is_bad(int n){
    if (n % 3 == 0){
        return true;
    }
    else if (n % 10 == 3){
        return true;
    }

    return false;
}

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        int k;
        cin >> k;


        int i = 1;
        int counter = 0;

        while (true){
            if (!is_bad(i)){
                counter++;
            }
            if (counter == k){
                break;
            }
            i++;
        }

        cout << i << endl;
    }
}
