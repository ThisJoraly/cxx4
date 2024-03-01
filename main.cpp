#include <iostream>
#include <string>


using namespace std;

string reverse(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    return str;
}

string removeVowels(string str) {
    string vowels = "aeiouAEIOUяиюыаоэуеЯИЮЫАОЭУЕ";
    for (int i = 0; i < str.length(); i++) {
        if (vowels.find(str[i]) != string::npos) {
            str.erase(i, 1);
            i--;
        }
    }
    return str;
}

string removeConsonants(string str) {
    string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZБВГДЖЗЙКЛМНПРСТФХЦЧШЩбвгджзйклмнпрстфхцчшщ";
    for (int i = 0; i < str.length(); i++) {
        if (consonants.find(str[i]) != string::npos) {
            str.erase(i, 1);
            i--;
        }
    }
    return str;
}

string shuffle(string str) {
    srand(time(0));
    for (int i = str.length() - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        swap(str[i], str[j]);
    }
    return str;
}

int main() {
    system("chcp 1251");
    string word;
    int choice;

    cout << "Enter a word: ";
    cin >> word;

    cout << "\nCHOOSE:" << endl;
    cout << "1. REVERSE" << endl;
    cout << "2. WITHOUT VOWELS" << endl;
    cout << "3. WITHOUT CONSONANTS" << endl;
    cout << "4. SHUFFLE LETTERS" << endl;
    cout << "CHOICE: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Output: " << reverse(word) << endl;
            break;
        case 2:
            cout << "Output: " << removeVowels(word) << endl;
            break;
        case 3:
            cout << "Output: " << removeConsonants(word) << endl;
            break;
        case 4:
            cout << "Output: " << shuffle(word) << endl;
            break;
        default:
            cout << "Poop choice!" << endl;
    }

    return 0;
}