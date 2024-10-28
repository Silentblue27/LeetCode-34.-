class Solution {
public:
	vector<int> searchRange(vector<int>& nums, int target) {
		int left=getLeft(nums,target);
		int right=getRight(nums,target);
		if(left==-2||right==-2){
			return {-1,-1};
		}
		if(right-left>=0){
			return {left,right};
		}
		return {-1,-1};
	}
	int getRight(vector<int>& nums,int target){
		int left=0,right=nums.size(),theright=-2;
		while(left<right){
			int mid=(left+right)>>1;
			if(nums[mid]>target){
				right=mid;
			}else{
				left=mid+1;
				theright=left-1;
			}
		}
		return theright;
	}
	int getLeft(vector<int>& nums,int target){
		int left=0,right=nums.size(),theleft=-2;
		while(left<right){
			int mid=(left+right)>>1;
			if(nums[mid]<target){
				left=mid+1;
			}else{
				right=mid;
				theleft=right;
			}
		}
		return theleft;
	}
};
