#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set<int> unq;

    int x;
    for (int i = 0; i < 4; i++){
        cin >> x;
        unq.insert(x);
    }

    cout << 4 - unq.size() << endl;
}


