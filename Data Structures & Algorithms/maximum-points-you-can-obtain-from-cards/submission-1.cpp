class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int sum=0;
        int ans;
        for(int i=0;i<k;i++){
            sum=sum+cardPoints[i];
        }
        ans=sum;
        int left=k-1;
        int right=n-1;
        while(left>=0){
            sum-=cardPoints[left];
            sum+=cardPoints[right];
            ans=max(sum,ans);
            left--;
            right--;
        }
        return ans;
    }
};