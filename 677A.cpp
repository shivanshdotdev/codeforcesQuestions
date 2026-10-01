#include <iostream>
using namespace std;

int main(){
    int n, h;
    cin >> n >> h;

    int x;

    int width = 0;

    for (int i = 0; i < n; i++){
        cin >> x;
        if (x > h){
            width += 2;
        }
        else {
            width++;
        }
    }

    cout << width << endl;

}
