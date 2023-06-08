class Solution {
public:
    void nextPermutation(vector<int>& A) {
         int n = A.size(); 
    
    int breakpoint = -1; 

    for (int i = n - 2; i >= 0; i--) {
        if (A[i] < A[i + 1]) {
            
            breakpoint = i;
            break;
        }
    }

    
    if (breakpoint == -1) {
        
        reverse(A.begin(), A.end());
       
    }else{
for (int i = n - 1; i > breakpoint; i--) {
        if (A[i] > A[breakpoint]) {
            swap(A[i], A[breakpoint]);
            break;
        }
    }

    
    reverse(A.begin() + breakpoint+ 1, A.end());
    }
    }
};