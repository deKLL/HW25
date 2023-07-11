#include <iostream>
#include <cstring>

#define IS_LETTERS(str) (std::strspn(str, "abcdefghijklmnopqrstuvwxyz") == std::strlen(str))
#define IS_DIGITS(str) (std::strspn(str, "0123456789") == std::strlen(str))

using namespace std;

int main() {
    char input[11];  // String of 10 characters

    cout << "Enter a string (length 10 characters): ";
    cin >> input;

    if (IS_LETTERS(input)) {
        cout << "LETTERS" << endl;
    } else if (IS_DIGITS(input)) {
        cout << "DIGITS" << endl;
    } else {
        cout << "ANOTHER" << endl;
    }

    return 0;
}
