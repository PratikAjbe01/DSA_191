class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    int n=grid.size();
    int m=grid[0].size();
    int N=n*m;//N->no of elements
    int Sum=(N*(N+1))/2;
    long long SumOfSquare = (1LL * N * (N + 1) * (2 * N + 1)) / 6;
    int aSum=0;
    long long aSumOfSquare=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int val=grid[i][j];
            aSum+=val;
           aSumOfSquare += 1LL * val * val;
        }
    }
    int xminusy=Sum-aSum;
    int xsqminusysq=SumOfSquare-aSumOfSquare;
    int xplusy=xsqminusysq/xminusy;
    int missing =(xminusy+xplusy)/2;
    int repeating=(xplusy-missing);
    return {repeating,missing};
    }
};