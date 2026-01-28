
//tc: O(n^2)
//sc: O(1)

class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        
        sort(arr.begin(),arr.end());
        
        for(int i=0; i<arr.size()-2; i++){
            int findingSum = target-arr[i];
            
            int low=i+1;
            int high=arr.size()-1;
            
            while(low<high){
                if(arr[low]+arr[high]==findingSum) return true;
                else if(arr[low]+arr[high]>findingSum) high--;
                else low++;
            }
        }
        
        return false;
        
    }
};