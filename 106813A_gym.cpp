#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main(){
    string c1, s1, c2, s2;
    cin >> c1 >> s1 >> c2 >> s2;

    int r_c = stoi(c1);
    int x_c = stoi(c2);

    if (r_c != x_c){
        cout << "0000" << endl;
        return 0;
    }

    int r_rownum = stoi(s1.substr(0,2));
    int x_rownum = stoi(s2.substr(0,2));
    char r_seatcode = s1[2];
    char x_seatcode = s2[2];

    if (r_seatcode > x_seatcode){
        swap(r_seatcode, x_seatcode);
    }

    if (r_rownum != x_rownum){
        cout << "1000" << endl;
        return 0;
    }

    
    if (r_seatcode <= 'C' && x_seatcode >= 'D'){
        cout << "1100" << endl;
        return 0;
    }

    if (r_seatcode + 1 == x_seatcode){
        cout << "1111" << endl;
    }
    else if (r_seatcode == 'D' && x_seatcode == 'F'){
        cout << "1111" << endl;
    }
    else {
        cout << "1110" << endl;
    }

}
