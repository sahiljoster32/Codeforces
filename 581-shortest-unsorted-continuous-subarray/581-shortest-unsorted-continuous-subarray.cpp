class Solution {
public:
     int findUnsortedSubarray(vector<int>& nums) {
        
       vector<int>arr=nums;
       sort(arr.begin(),arr.end());
         
       int l=INT_MAX,r=INT_MIN;
         
       for(int i=0;i<nums.size();i++){
           if(arr[i]!=nums[i]){
               l=min(l,i);
               r=max(r,i);
           }
       }
       if(r==INT_MIN && l==INT_MAX){
           return 0;
       }
       return r-l+1;
        
    }
    int findUnsortedSubarray1(vector<int>& nums) {
        
        int maxi=INT_MIN;
        int l=INT_MAX,r=INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            
            if(maxi>nums[i]){
                
                int j=i-1;
                while(j>=0 && nums[i]<nums[j]){
                    j--;
                }
                l=min(l,j+1);
                r=max(r,i);
            }
            else{
                maxi=nums[i];
            }
            
        }
        if(l==INT_MAX && r==INT_MIN){
            return 0;
        }
        return r-l+1;
        
    }
};