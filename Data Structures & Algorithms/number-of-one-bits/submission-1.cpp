class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n){
            int digit=n%2;
            if(digit==1){
                count++;
            }
            n=n/2;
        }
        return count;
    }
};
