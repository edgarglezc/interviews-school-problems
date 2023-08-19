#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n);

        for(int i = 1; i <= n; i++) {
            if(i % 15 == 0) {
                answer[i-1] = "FizzBuzz";
            }
            else if(i % 3 == 0) {
                answer[i-1] = "Fizz";
            } 
            else if(i % 5 == 0) {
                answer[i-1] = "Buzz";
            }
            else { 
                answer[i-1] = to_string(i);
            }
        }

        return answer;
    }
};

int main() {
    Solution sol;

    vector<string> case1 = sol.fizzBuzz(3);
    vector<string> case2 = sol.fizzBuzz(5);
    vector<string> case3 = sol.fizzBuzz(15);

    for(auto s : case1) {
        cout << s << " ";
    } cout << endl;

    for(auto s : case2) {
        cout << s << " ";
    } cout << endl;

    for(auto s : case3) {
        cout << s << " ";
    } cout << endl;

    return 0;
}