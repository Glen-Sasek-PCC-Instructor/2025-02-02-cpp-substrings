#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main() {
    string phrase1 = "";
    string phrase2 = "";
    int foundIndex;

    cout << "Welcome to the Phrases and Subphrases program!" << endl << endl;

    cout << "Enter Phrase 1: ";
    getline(cin, phrase1);
    cout << "You entered: " << phrase1 << endl;

    cout << "Enter Phrase 2: ";
    getline(cin, phrase2);
    cout << "You entered: " << phrase2 << endl << endl;

    foundIndex = phrase2.find(phrase1);

    if (foundIndex != string::npos) {
        // add if statements for if phrase1 is bigger than phrase2
        cout << phrase1 << " is found in " << phrase2 << endl;
        cout << phrase2.substr(foundIndex) << endl;
    } else {
        foundIndex = phrase1.find(phrase2);
        if (foundIndex != string::npos) {
            cout << phrase2 << " is found in " << phrase1 << endl;
            cout << phrase1.substr(foundIndex) << endl;
        } else {
            cout << "No match";
        }
    }
    cout << endl << endl << "Thank you for using my program!" << endl;
}