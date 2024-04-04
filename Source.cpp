#include <iostream>
#include <string>
using namespace std;

int countWords(string str);


int main() {
    while (true) {
        string userString;

        cout << "Enter a string: ";
        getline(cin, userString);
        if (userString == "q") {
            break;
        }
        int words = countWords(userString);

        cout << "Word count: " << words << endl;
    }
    return 0;
}


int countWords(string str) {
    bool inWord = false;
    int wordCount = 0;

    for (char c : str) {
        if (c == ' ') {
            if (inWord) {
                wordCount++;
                inWord = false;
            }
        }
        else {
            inWord = true;
        }
    }

    if (inWord) {
        wordCount++;
    }

    return wordCount;
}