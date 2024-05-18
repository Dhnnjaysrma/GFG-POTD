class Solution {
public:
    int findPeakElement(vector<int>& arr) 
    {
        // Code here.
       int left=0;
       int right=arr.size()-1;
       int mid=0;
       int ans=0;
       
       while(left<=right){
           
           mid=left+(right-left)/2;
            if (mid==arr.size()-1){
                right=mid-1;
                continue;
            }
           if(arr[mid]>arr[mid+1]){
               right=mid-1;
             //  ans=max(ans, arr[mid]);
           }
           else{
             left=mid+1;
           }
           
       }
       return arr[left];
    }
};
