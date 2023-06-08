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