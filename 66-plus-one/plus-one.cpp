class Solution {
public:
    vector<int> plusOne(vector<int>& digit) {
        int n = digit.size();
        for(int i = n-1; i>=0; i--){ //backward traverse since last digit is needed to be incremented
            if(digit[i] < 9){
                digit[i]++;
                return digit;
            }
            digit[i] = 0; // carry forward
        }
        
        digit.insert(digit.begin(),1);
        return digit; // all digits are 9 i.e [9,9,9,9,9,9]
    }
    
};
