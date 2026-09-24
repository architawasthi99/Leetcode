class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int temp=num;
            int sum=0;

            while(temp>0){
                sum+=temp%10;
                temp=temp/10;
            }

            if(sum==i){
                return i;
            }
            
        }
        return  -1;
    }
};

int  main(){
  Solution s1;
  vector<int>nums={5,10,54};
  print(s1.smallestIndex(nums);
  return 0;
}
