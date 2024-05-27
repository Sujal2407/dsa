#include <iostream>
using namespace std;

void replacePi(string &s, int i) {
    // Base case: If the string is empty or we've reached the end of the string, stop.
    if (i >= s.length()) {
        return;
    }

    // Recursive case: Look for "pi" in the current position and replace it with "3.14".
    if (s[i] == 'p' && i + 1 < s.length() && s[i + 1] == 'i') {
        // Replace "pi" with "3.14".
        s = s.substr(0, i) + "3.14" + s.substr(i + 2);
        // Recurse on the substring starting after the replacement.
        replacePi(s, i + 4);
    } else {
        // If "pi" is not found, move to the next character.
        replacePi(s, i + 1);
    }
}

int main() {
    int N;
    cin >> N;
    cin.ignore(); // Ignore the newline character

    for (int i = 0; i < N; i++) {
        string line;
        getline(cin, line); // Read the input line

        // Call the recursive function to replace "pi" with "3.14"
        replacePi(line, 0);

        // Print the modified line
        cout << line << endl;
    }

    return 0;
}
