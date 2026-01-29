class Solution {
public:
    int minSwaps(vector<int>& nums) {
        
        int n = nums.size();

        vector<int> temp(2*n);

        for(int i = 0;i<2*n;i++)
            temp[i] = nums[i%n];

        int totalOnes = accumulate(nums.begin(),nums.end(),0); // window size

        int i = 0;
        int j = 0;

        int maxOnes = 0;
        int currOnes = 0;

        while(j < 2*n)
        {
            if(temp[j] == 1)
                currOnes++;

            if(j-i+1 > totalOnes) // if window size overflow then move i ahead
            {
                currOnes-= temp[i];
                i++;
            }

            maxOnes = max(maxOnes,currOnes);
            j++;
        }

        return totalOnes - maxOnes;

    }
};