class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        const int MOD=12345;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> p(n, vector<int>(m));

        long long pro1=1;
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                p[i][j]=pro1;
                pro1=(pro1 * (grid[i][j]%MOD))%MOD;
            }
        }

        long long pro2=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                p[i][j]=(p[i][j] * pro2)%MOD;
                pro2=(pro2*(grid[i][j])%MOD)%MOD;
            }
        }
        return p;
    }
};