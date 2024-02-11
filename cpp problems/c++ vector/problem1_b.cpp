/* problem statement:
 ->Write a C++ program to check whether numbers in a 
 vector can be rearranged so that each number appears
  exactly once in a consecutive list of numbers.
   Return true otherwise false.

Sample Data:
{1, 2 ,5, 7, 4, 3, 6} -> true
{1, 2 ,5, 0, 3, 6, 7} ->false
*/

// SOLUTION:2

#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;



bool test(std::vector<int>nums){
    std::sort(nums.begin(),nums.end());
    int last=nums.at(0)-1;
    for(int number:nums){
        if((number-last)!=1){
            return false;
            last=number;
        }
    }
    return true;
}


int main(){
    vector<int>nums={1,2,5,7,4,3,6};//true
    // vector<int>nums={1,2,5,0,3,6,7};//false
    for(int x:nums){
        cout<<x<<" ";
    }
    cout<<"\ncheck consecutive numbers in the said vector! "<<test(nums)<<endl;
}
