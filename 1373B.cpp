#include <iostream>
using namespace std;

void canRemoveElements(string* s){
    s->erase(0,2);
}

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        string s;
        cin >> s;

        canRemoveElements(&s);

        cout << s;
    }


}
