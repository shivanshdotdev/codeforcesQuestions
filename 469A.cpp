#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int final_level;
    cin >> final_level;

    vector<int> hash(final_level, 0);

    int x_turn;
    cin >> x_turn;

    for (int i = 0; i < x_turn; i++){
        int t;
        cin >> t;
        if (hash[t-1] == 0){
            hash[t-1] = 1;
        }
    }

    int y_turn;
    cin >> y_turn;

    for (int i = 0; i < y_turn; i++){
        int t;
        cin >> t;
        if (hash[t-1] == 0){
            hash[t-1] = 1;
        }
    }

    int total_levels_cleared = count(hash.begin(), hash.end(), 1);

    if (final_level == total_levels_cleared){
        cout << "I become the guy." << endl;
    }
    else {
        cout << "Oh, my keyboard!" << endl;
    }

}
