#include <iostream>
using namespace std;

int main(){
    string str2;
    string str1;

    cin >> str1 >> str2;

    int len = str1.length();
    bool equal = true;

    for (int i = 0; i < len; i++){
        int chr1 = str1[i];
        int chr2 = str2[i];

        if (chr1 < 97){
            chr1 += 32;
        }
        
        if (chr2 < 97){
            chr2 += 32;
        }

        if (chr1 < chr2){
            cout << -1;
            equal = false;
            break;
        }
        else if (chr1 > chr2){
            cout << 1;
            equal = false;
            break;
        }
    }

    if (equal){
        cout << 0;
    }

    cout << endl;

}
