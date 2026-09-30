#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main(){
    string str;
    cin >> str;

    int len = str.length();
    char arr[len];
    bool inArray;
    int count = 0; // number of elements in the array

    for (int i = 0; i < len; i++){
        char x = str[i];
        inArray = false;

        for (int j = 0; j < count; j++){
            if (x == arr[j]){
                inArray = true;
                break;
            }
        }
        
        if (!(inArray)){
            arr[count++] = x;
        }
    }

    if (count % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }

    cout << endl;
}

void betterApproachWithoutSTL(){
    string str;
    cin >> str;

    bool seen[26] = {false};
    int count = 0;

    for (char c : str){
        // the index value must be within 26 
        // the characters will all be in lowercase (given in question)
        // now whatever the character is, when a is subtracted from it 
        // their ascii value will be used as operands 
        // hence even if c is z, the index = 90 - 65 = 25 hence the last index 
        // so the index will be calculated automatically 
        int index = c - 'a';

        // assume that the seen array indexes are mapped from 0 to 25 with a to z
        // if the character is seen, its index is true else false
        if (!(seen[index])){
            seen[index] = true;
            count++;
        }
    }

    if (count % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }

    cout << endl;
}

void betterApproachWithSTL(){
    string str;
    cin >> str;

    unordered_set<char> unique_characters(str.begin(), str.end());

    if (unique_characters.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }

}
