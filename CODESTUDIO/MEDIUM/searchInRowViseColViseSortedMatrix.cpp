#include <bits/stdc++.h> 
pair<int, int> search(vector<vector<int>> matrix, int x)
{
    pair <int, int> ans;
    ans.first = -1;
    ans.second = -1;
    int n = matrix.size();
    // checking conditions 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(matrix[i][j] == x){
                ans.first = i;
                ans.second = j;
            }
        }
    }
    return ans;
}