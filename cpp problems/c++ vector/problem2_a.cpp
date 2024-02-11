/*
problem statement:
Write a C++ program that returns the elements in a vector
that are strictly smaller than their adjacent left and right 
neighbours.

Sample Data:
({7, 2 ,5, 3, 1, 5, 6}) -> 2, 1
({1, 2 ,5, 0, 3, 1, 7}) -> 0, 1
*/

//SOLUTION :1

#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;


std::vector<int>test(std::vector<int>nums){
    std::vector<int>temp; //temporary vector for storing result elements
    for(int i=1;i<nums.size()-1;i++){
        if(nums[i] < nums[i-1] && nums[i] <nums[i+1]){
            temp.push_back(nums[i]);
        }
    }
    return temp;
}




int main(){
    vector<int>nums={7,2,5,3,1,6};//output :2 1
    // vector<int>nums={1,2,5,0,3,1,7};//output: 0 1
    cout<<"Original vector elements:\n";
    for(int x:nums){
        cout<<x<<" ";
    }

    vector<int>result=test(nums);
    cout<<"\nvector elements that are smaller than its adjacent neighbours:\n";
    for(int y:result){
        cout<<y<<" ";
    }

    return 0;
}