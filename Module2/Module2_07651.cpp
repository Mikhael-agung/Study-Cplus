#include<iostream>
using namespace std;

int main() {
    int start;
    int oper, result;

    cout << "masukan Angka yang ingin di gunakan: " << endl;
    cin >> start;

    
    cout << "Baris aritmatika: ";
    for(int i = 1; i <= 10; i++) {
        if(i % 3 == 1) {
            oper = i;
            result = start + oper;
        } else if(i % 3 == 2) {
            oper = i;
            result = start * oper;
        } else {
            oper = -i;
            result = start + oper;
        } 
        cout << result << " ";
        start = result;
    }

    return 0;
}

