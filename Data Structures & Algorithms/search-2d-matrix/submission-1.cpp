class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int flag=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(target==matrix[i][j]){
                    flag=1;
                }
            }
        }
        if(flag==1){
            return true;
        }
        else{
            return false;
        }
        return false;
    }
};
