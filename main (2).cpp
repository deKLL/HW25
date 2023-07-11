#include <iostream>
#include <cstring>
#define IS_INCREASING(str) (isIncreasing(str))
using namespace std;

bool isIncreasing(const char* str) {
    int length = strlen(str);
    for (int i = 0; i < length - 1; i++) {
        if (str[i] >= str[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char input[11];
    cout << "Enter a string: ";
    cin >> input;

    if (IS_INCREASING(input)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
