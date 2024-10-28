class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		int left=0,right=nums.size(),index=0,x=0,y=0;
		while(left<right){
			int mid=(left+right) >> 1;
			if(nums[mid]>target){
				right=mid;
			}else if(nums[mid]<target){
				left=mid+1;
			}else{
				index=mid;
				x=index,y=index;
				while(x>=0&&nums[x]==target){
					x--;
				}
				while(y<nums.size()&&nums[y]==target){
					y++;
				} 
				return {x+1,y-1};               
			}
		}return {-1,-1};
	}
};
