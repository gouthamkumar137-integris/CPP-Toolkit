#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// 1. Count Vowels
int countVowels(string s) {
    int count = 0;
    for(int i = 0; i < s.length(); i++) {
        char c = tolower(s[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

// 2. Reverse String
string reverseString(string s) {
    string result = "";
    for(int i = s.length() - 1; i >= 0; i--) {
        result += s[i];
    }
    return result;
}

// 3. Palindrome Check
bool isPalindrome(string s) {
    int start = 0;
    int end = s.length() - 1;

    while(start < end) {
        if(s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

// 4. Count Words
int countWords(string s) {
    if(s.length() == 0) return 0;

    int count = 1;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == ' ') {
            count++;
        }
    }
    return count;
}

// 5. Convert to Uppercase
string toUpperCase(string s) {
    for(int i = 0; i < s.length(); i++) {
        s[i] = toupper(s[i]);
    }
    return s;
}

int main() {
    string s;

    cout << "Enter a sentence: ";
    getline(cin, s);

    cout << "\nOriginal: " << s << endl;
    cout << "Vowels: " << countVowels(s) << endl;
    cout << "Reversed: " << reverseString(s) << endl;

    if(isPalindrome(s))
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";

    cout << "Word Count: " << countWords(s) << endl;
    cout << "Uppercase: " << toUpperCase(s) << endl;

    return 0;
}