#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        
        stack<char> record;
        
        for (int i = 0; i < s.length(); i++) {
            
            if (s[i] == ')') {
                
                
                if (record.empty() || record.top() != '(') {
                    return false;
                }
                
                record.pop();
            }
            
            else if (s[i] == ']') {
                if (record.empty() || record.top() == '(' || record.top() == '{' || record.top() != '[') {
                    return false;
                }
                
                
                record.pop();
            }
            
            else if (s[i] == '}') {
                if (record.empty() || record.top() != '{') return false;
                
                record.pop();
            }
            
            else {
                record.push(s[i]);
            }
        }
        
        if (!record.empty()) return false;
        
        return true;
        
    }
};