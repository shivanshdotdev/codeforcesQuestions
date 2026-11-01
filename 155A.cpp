#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    int score;
    cin >> score;

    int minScore = score;
    int maxScore = score;
    
    int amazingCount = 0;

    for (int x = 1; x < t; x++){
        cin >> score;
        if (score > maxScore){
            maxScore = score;
            amazingCount++;
        }
        else if (score < minScore){
            minScore = score;
            amazingCount++;
        }
    }

    cout << amazingCount << endl;
}
