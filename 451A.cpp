#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int total = n + m;

    int move;

    for (int i = 1; i <= total; i++){
        n -= 1;
        m -= 1;

        int intersections = n * m;

        if (intersections == 0){
            move = i;
            break;
        }
    }

    if (move % 2 == 0){
        cout << "Malvika";
    }
    else {
        cout << "Akshat";
    }


    cout << endl;
}
