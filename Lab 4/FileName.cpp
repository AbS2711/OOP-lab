#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    cout << "Enter words separated by spaces (press Enter to stop):" << endl;

    while (true) {
        getline(cin, word);  // Take input word by word
        if (word.empty()) { // Stop if the input is a null string (empty line)
            break;
        }

        int vowelCount = 0;

        // Nested loop to count vowels
        for (size_t i = 0; i < word.length(); i++) {
            char ch = tolower(word[i]);  // Convert to lowercase for uniformity
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowelCount++;
            }
        }

        cout << word << endl;
        cout << "Vowel count is " << vowelCount << endl;
    }

    return 0;
}