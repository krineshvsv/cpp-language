/* problem statement:
 ->Write a C++ program to check whether numbers in a 
 vector can be rearranged so that each number appears
  exactly once in a consecutive list of numbers.
   Return true otherwise false.

Sample Data:
{1, 2 ,5, 7, 4, 3, 6} -> true
{1, 2 ,5, 0, 3, 6, 7} ->false
*/

// SOLUTION:1

#include<algorithm>// Including the Algorithm Library for sorting
#include<iostream>
#include<vector>
using namespace std;

bool test(std::vector<int>nums){
    //sorting the elements of the vector in ascending order.
    std::sort(nums.begin(),nums.end());

    //check if elements are consecutive
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i+1]!=(nums[i] + 1)){
            return false;
        }
    }return true;//if all are consecutive ,return true
}

int main(){
    vector<int>nums={1,2,5,7,4,3,6};//true
    // vector<int>nums={1,2,5,0,3,6,7};//false
    for(int x:nums){
        cout<<x<<" ";
    }
    cout<<"\ncheck consecutive numbers in the said vector! "<<test(nums)<<endl;
}
