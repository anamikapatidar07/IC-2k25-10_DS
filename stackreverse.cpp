

#include <iostream>
#include <stack>
using namespace std;


bool isPalindrome(string s) {

    stack<char> PD;

 
    for (int i = 0; i < s.length(); i++) {
        PD.push(s[i]);
    }

    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != PD.top()) {
            return false;
        }
        PD.pop();
    }

    return true;
}

int main() {
     string s;
     cout << "Enter a string: ";
     cin >> s;

    if (isPalindrome(s)) {
        cout << "Yes, it is Palindrome" << endl;
    } else {
        cout << "No, it is not Palindrome" << endl;
    }

    return 0;
}

// OUTPUT
// Enter a string: Anamika
// No, it is not Palindrome

