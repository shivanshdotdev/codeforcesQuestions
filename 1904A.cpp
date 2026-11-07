#include <iostream>
#include <set>
#include <utility>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t > 0){
        t--;

        int a, b;
        cin >> a >> b;

        int xk, yk, xq, yq;
        cin >> xk >> yk >> xq >> yq;

        set<pair<int, int>> kings_attack_positions;
        set<pair<int, int>> queens_attack_positions;
        set<pair<int, int>> ans;

        kings_attack_positions.insert({xk + a, yk + b});
        kings_attack_positions.insert({xk - a, yk - b});
        kings_attack_positions.insert({xk + a, yk - b});
        kings_attack_positions.insert({xk - a, yk + b});

        kings_attack_positions.insert({xk + b, yk + a});
        kings_attack_positions.insert({xk - b, yk - a});
        kings_attack_positions.insert({xk + b, yk - a});
        kings_attack_positions.insert({xk - b, yk + a});


        queens_attack_positions.insert({xq + a, yq + b});
        queens_attack_positions.insert({xq - a, yq - b});
        queens_attack_positions.insert({xq + a, yq - b});
        queens_attack_positions.insert({xq - a, yq + b});

        queens_attack_positions.insert({xq + b, yq + a});
        queens_attack_positions.insert({xq - b, yq - a});
        queens_attack_positions.insert({xq + b, yq - a});
        queens_attack_positions.insert({xq - b, yq + a});

        // set_intersection(kings_attack_positions.begin(), queens_attack_positions.begin(), kings_attack_positions.end(), queens_attack_positions.end(), inserter(ans, ans.begin()));

        for (auto p : kings_attack_positions){
            for (auto q : queens_attack_positions){
                if (p == q){
                    ans.insert(p);
                }
            }
        }

        cout << ans.size() << endl;

        // cout << "===== KING IS BEING ATTACKED FROM =====" << endl;
        // for (auto p : kings_attack_positions){
        //     cout << p.first << ", " << p.second << endl;
        // }
        //
        // cout << "===== QUEEN IS BEING ATTACKED FROM =====" << endl;
        // for (auto p : queens_attack_positions){
        //     cout << p.first << ", " << p.second << endl;
        // }

        // for (auto p : ans){
        //     cout << p.first << ", " << p.second << endl;
        // }
    }
}
