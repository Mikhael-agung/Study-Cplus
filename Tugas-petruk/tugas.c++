#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string sentences[10];
int sentenceCount = 0;

void showSentences() {
    for (int i = 0; i < sentenceCount; i++) {
        cout << sentences[i] << endl;
    }
}

void createSentence() {
    getline(cin, sentences[sentenceCount++]);
}

void modifySentenceByValue(string sentence) {
    // Ubah kalimat di sini
}

void modifySentenceByReference(string &sentence) {
    // Ubah kalimat di sini
}

void deleteSentence() {
    sentenceCount--;
}

void sortAscending() {
    sort(sentences, sentences + sentenceCount);
}

void sortDescending() {
    sort(sentences, sentences + sentenceCount, greater<string>());
}

void showVowels() {
    for (int i = 0; i < sentenceCount; i++) {
        for (char c : sentences[i]) {
            if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
                cout << c;
            }
        }
        cout << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "1. Tampilkan Kalimat\n2. Buat Kalimat Baru\n3. Ubah Kalimat (Call by Value)\n4. Ubah Kalimat (Call by Reference)\n5. Hapus Kalimat\n6. Urutkan Kalimat Ascending\n7. Urutkan Kalimat Descending\n8. Tampilkan Huruf Vokal\n9. Keluar\n";
        cin >> choice;
        cin.ignore();
        switch (choice) {
            case 1:
                showSentences();
                break;
            case 2:
                createSentence();
                break;
            case 3:
                // Implementasi ubah kalimat (Call by Value)
                break;
            case 4:
                // Implementasi ubah kalimat (Call by Reference)
                break;
            case 5:
                deleteSentence();
                break;
            case 6:
                sortAscending();
                break;
            case 7:
                sortDescending();
                break;
            case 8:
                showVowels();
                break;
            case 9:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (choice != 9);

    return 0;
}
