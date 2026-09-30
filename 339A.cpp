#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;

    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;

    for (char c : str){
        if (c == '1'){
            count_1++;
        }
        else if (c == '2'){
            count_2++;
        }
        else if (c == '3'){
            count_3++;
        }
    }

    string final = "";

    for (int i = 0; i < count_1; i++){
        final += "1+";
    }

    for (int i = 0; i < count_2; i++){
        final += "2+";
    }

    for (int i = 0; i < count_3; i++){
        final += "3+";
    }

    final.pop_back();

    cout << final << endl;
}
