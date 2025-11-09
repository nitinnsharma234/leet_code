class Solution {
public:
    int countOperations(int nums1, int nums2) {
        //num1>=num2 // need to substract
        //othewise //num2-num1
        int steps=0;
        while(nums1!=0 && nums2!=0){
            if(nums1>=nums2){
                nums1= nums1-nums2;
            }
            else{
                nums2=nums2-nums1;
            }
            steps++;
        }
        return steps;
    }
};