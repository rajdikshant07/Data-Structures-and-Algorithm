class Solution {
  public:
  
    bool canWePlacedCows(vector<int>stalls, int distance, int cows){
        int last=stalls[0];
        int tempCows=1;
        for(int i=1;i<stalls.size();i++){
            if((stalls[i]-last)>=distance){
                tempCows++;
                last=stalls[i];
            }
            if(tempCows==cows) return true;
        }
        return false;
    }
    
    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(), stalls.end());
        int n=stalls.size();
        // code here
        int left=1;
        int right=stalls[n-1]-stalls[0];
        
        int ans=0;
        while(left<=right){
            int mid=left + (right-left)/2;
            
            if(canWePlacedCows(stalls, mid, k)==true){
                ans=mid;
                left=mid+1;
            }
            else right=mid-1;
        }
        
        return ans;
        
    }
};