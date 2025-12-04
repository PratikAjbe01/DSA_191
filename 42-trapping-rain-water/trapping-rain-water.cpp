class Solution {
public:
    int trap(vector<int>& height) {
    int n=height.size();
    vector<int>right(n,1);
    int suffix=0;
    for(int i=n-1;i>=0;i--){
    if(suffix<height[i]){
        suffix=height[i];
        right[i]=suffix;
    }else right[i]=suffix;
    }
    int area=0;
    int pre=0;
    for(int i=0;i<n;i++){
        if(pre<height[i]){
            pre=height[i];
        }
      area+=abs(min(pre,right[i])-height[i]);
    }
    return area;    
    }
};