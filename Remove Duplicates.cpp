#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++) {
            for (vector<int>::iterator jt = it + 1; jt != nums.end();) {
                if (*jt == *it) {
                    jt = nums.erase(jt);
                }
                
                else {
                    jt++;
                }
                
            }
        }
        
        return nums.size();
    }
};