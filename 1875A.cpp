#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    int timer_limit, bomb_timer, n;
    for (int q = 0; q < t; q++){
        cin >> timer_limit >> bomb_timer >> n; 

        int tools[n];

        for (int i = 0; i < n; i++){
            cin >> tools[i];
        }

        sort(tools, tools + n); // hum tools ko ascending order mein use karenge.... use karenge agar bomb just phatne wala hai ya phir tool ko use karne pe bhi capped limit se neche hai

        int tools_used = 0;
        long long count = 0; // long long isliye cuz test case mein integer overflow error aa rahi thi to usko fix karne ke liye

        bool can_skip = true; // the optimization flag

        while (bomb_timer > 0){

            if (tools_used < n){ // jab tools khatam ho jaye tab tools ka use na karo 
                int tool_value = tools[tools_used]; 

                if (bomb_timer == 1 || (bomb_timer + tool_value) <= timer_limit){
                    // wahi upar wali condition, yah to tab istmaal karo hi karo jab 1 hai value timer ki 
                    // ya phir istmaal karne pe bhi limit ke andar rahega 

                    bomb_timer = min(bomb_timer + tool_value, timer_limit);
                    tools_used++;
                    can_skip = true;
                    continue;
                }
            }

            // instead of simulating har ek second with count++ and timer--
            // ham direct 1 pe jump karte hai 
            // and phir agar tools bache hai to upar wala kaam and phir se skip kar sakte hai 
            // but agar nhi to else wala single time run hoke explosion hoga
            if (can_skip){
                int x = bomb_timer - 1;
                count += x;
                bomb_timer = 1;
                can_skip = false;
            }
            else{
                count++;
                bomb_timer--;
            }
        }

        cout << count << endl;

    }

}
