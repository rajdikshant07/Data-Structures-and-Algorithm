int solve(const vector<int>& nums) {
    vector<int> sortedarr=nums;
    sort(sortedarr.begin(),sortedarr.end());

    int count=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=sortedarr[i]){
            count++;
        }
    }
    return count;
}