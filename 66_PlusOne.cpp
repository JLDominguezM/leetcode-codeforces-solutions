//Runtime: 0 ms, beats 100.00 % of C++ online submissions for Plus One.
//Memory Usage: 10.31 MB, beats 15.55% of C++ online submissions for Plus One.
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n-1; i >= 0; i--) {
            digits[i] += 1;
            if (digits[i] != 10){
            break;
            }
            digits[i] = 0;
            if (i == 0) {
                digits[i] += 1;
                digits.push_back(0);
            }
        }

        return digits;
    }
};



/* 
for (int i = n; i >= 0; i--) {
    vector[i] += 1;
    if (vector[i] != 10 || vector[0] != 9) {
        break;
    }
    vector[i] = 0
}

return vector

9 9 9
0 0 1
=====
1 0 0 0



*/