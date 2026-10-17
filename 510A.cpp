#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    bool start = false;

    for (int i = 1; i <= n; i++){
        if (i % 2 == 1){
            for (int i = 0; i < m; i++){
                cout << "#";
            }
        }
        else{
            if (start){
                cout << "#";
                for (int i = 0; i < m-1; i++){
                    cout << ".";
                }
            }
            else {
                for (int i = 0; i < m-1; i++){
                    cout << ".";
                }
                cout << "#";
            }
            start = !start;
        }
        cout << endl;
    }
}
