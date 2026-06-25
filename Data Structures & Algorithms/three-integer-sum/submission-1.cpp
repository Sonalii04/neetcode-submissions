class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> output;
        int n = nums.size();
        for (int i=0; i<n ; i++){
            for(int j=i+1 ; j <n ; j++){
                for (int k=j+1 ; k<n ; k++){
                    if(nums[i] + nums[j] + nums[k] == 0){
                        vector<int> temp = {nums[i] , nums[j] , nums[k]};
                        sort(temp.begin(), temp.end());
                        output.insert(temp);
                    }
                }
            }
        }
        return vector<vector<int>>(output.begin(), output.end());
    }
};
