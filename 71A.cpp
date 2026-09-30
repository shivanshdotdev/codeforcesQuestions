#include <iostream>
#include <string>
using namespace std;

string abbr(string word);

int main(){
    int n;
    cin >> n;

    string words[n];
    for (int i = 0; i < n; i++){
        cin >> words[i];
    }

    for (int i = 0; i < n; i++){
        cout << abbr(words[i]) << endl;
    }

}

string abbr(string word){
    int len = word.length();

    string return_string = word;
    if (len > 10){
        return_string = "";
        return_string = word[0] + to_string(len-2) + word[len-1];
    }

    return return_string;
}
