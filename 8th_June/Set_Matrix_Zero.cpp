// Brute Force Solution
class Solution {
public:
    void markrow(int i){
        for (int j=0;j<m.size();j++){
            if(m[i][j]!=0){
                m[i][j]=-1;
            }
        }
    }
      void markCol(int j){
        for (int i=0;i<m[0].size();i++){
            if(m[i][j]!=0){
                m[i][j]=-1;
            }
        }
    }
    void setZeroes(vector<vector<int>>& m) {
        
        vector<pair<int,int>> vt;

        for(int i=0;i<m.size();i++){
          for(int j=0;j<m[0].size();j++){
              if(m[i][j]==0){
                  
                  markrow(i);
                  markCol(j);
              }
          }
        }


    for(int i=0;i<m.size();i++){
        for(int j=0;j<m[0].size();j++){
            if(m[i][j]==-1){
                m[i][j]=0;
            }
        }
    }
    }
};




// Better Solution

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> row(n,0); // row array
   vector<int> col(m,0); // col array

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
               
                row[i] = 1;

              
                col[j] = 1;
            }
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (row[i] || col[j]) {
                matrix[i][j] = 0;
            }
        }
    }
    }
};

//Optimal Solution
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
 int n = matrix.size();
    int m = matrix[0].size();
    int col0 = 1;
  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
               
                matrix[i][0] = 0;

               
                if (j != 0)
                    matrix[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }

    
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (matrix[i][j] != 0) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    if (matrix[0][0] == 0) {
        for (int j = 0; j < m; j++) {
            matrix[0][j] = 0;
        }
    }
    if (col0 == 0) {
        for (int i = 0; i < n; i++) {
            matrix[i][0] = 0;
        }
    }

    }
};

// Solution
class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        
        vector<pair<int,int>> vt;

        for(int i=0;i<m.size();i++){
          for(int j=0;j<m[0].size();j++){
              if(m[i][j]==0){
                  
                  vt.push_back({i,j});
              }
          }
        }


    // Set 0
     for(auto &i : vt){
		int x = i.first;
		int y = i.second;

		for(int p = 0; p < m.size(); p++){
			m[p][y] = 0;
		}

		for(int p = 0; p < m[0].size(); p++){
			m[x][p] = 0;
		}
	}
    }
};

