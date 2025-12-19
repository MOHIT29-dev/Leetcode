class Solution {
public:
    vector<int> plusOne(vector<int>& digit) {
        int n = digit.size();
        for(int i = n-1; i>=0; i--){
            if(digit[i] < 9){
                digit[i]++;
                return digit;
            }
            digit[i] = 0;
        }
        
        digit.insert(digit.begin(),1);
        return digit;
    }
    
};