#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++){
        int x;
        cin >> x;

        if (x < 0){
            if (sum > 0){
                sum--;
            }
            else{
                count++;
            }
        }
        else {
            sum += x;
        }
    }

    cout << count << endl;
}
