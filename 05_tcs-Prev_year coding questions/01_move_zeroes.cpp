//     A chocolate factory is packing chocolates into packets. The chocolate packets here represent an array of N number of integer values. The Task is to find the empty packets(0) of chocolate and push it to end of the conveyer belt. 

// Input 1: N = 8, arr = [4 , 5, 0, 1, 9, 0, 5, 0 ] 
// Output 1 : [4 5 1 9 5 0 0 0]

// Input 2: N = 6, arr = [0,0,1,2,4,5]
// Output 2: [1,2,4,5,0,0]
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }
        int len=nums.size()-j;
        while(len--){
            nums[j]=0;
            j++;
        }
    }
};