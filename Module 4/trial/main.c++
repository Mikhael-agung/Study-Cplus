#include <iostream>
#include <string>
using namespace std;

string kalimat;

// Fungsi dengan parameter call by value
void updateSentenceByValue(string sentence) {
    cout<<"Masukkan kalimat baru: ";
    getline(cin, sentence);
}

// Fungsi dengan parameter call by reference
void updateSentence(string &sentence) {
    cout<<"Masukkan kalimat baru: ";
    getline(cin, sentence);
}
int main() {
    cout<<"Masukkan Sebuah Kalimat : ";
	getline(cin, kalimat);

    cout<<"Kalimat awal: "<<kalimat<<endl;
    cout<<"\n";
    
    updateSentenceByValue(kalimat);
    cout<<"Kalimat setelah pemanggilan fungsi (call by value): "<<kalimat<<endl;
    cout<<"\n";
    
    updateSentence(kalimat);
    cout<<"Kalimat setelah pemanggilan fungsi (call by reference): "<<kalimat<<endl;
    return 0;
}
