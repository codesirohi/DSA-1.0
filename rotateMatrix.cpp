#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix) {
    
        int n = matrix.size();
        reverse(matrix.begin(),matrix.end());
        for(int i = 0 ; i<n ; i++)
        {
            for(int j = 0 ; j <i;j++)
            {
                
                swap(matrix[i][j],matrix[j][i]);
                
            }
            
            
        }    
}

int main(){

    vector<vector<int>> matrix =
    { 
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int n = matrix.size();
    rotate(matrix);

    for(int i = 0 ; i<n ; i++)
        {
            for(int j = 0 ; j <n;j++)
            {
                
               cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
            
            
        }    
    
    return 0;
}