#include <bits/stdc++.h>
#include <algorithm> 
#include <cctype>
#include <locale>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int currentWordLength = 0;
        int lastWordLength = 0;
        for(char c : s) {
            if(c == ' ') currentWordLength = 0;
            else {
                currentWordLength++;
                lastWordLength = currentWordLength;
            }
        }
        return lastWordLength;
    }
};

int main() {
    Solution sol;

    cout << sol.lengthOfLastWord("Hello World") << endl;    
    cout << sol.lengthOfLastWord("   fly me   to   the moon  ") << endl;
    cout << sol.lengthOfLastWord("luffy is still joyboy") << endl;

    return 0;
}