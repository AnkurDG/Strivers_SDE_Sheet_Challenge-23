class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix[0].size();
        int n=matrix.size();
        int row=0; int col=m-1;
        bool temp = false;

      while(row<n&&col>-1){
          int cur = matrix[row][col];
          if(cur==target) return true;
          if(target>cur) row++;
          else col--;
      }
        


       return temp;
    
    }
     

};