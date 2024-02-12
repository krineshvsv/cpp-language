/*
statement:Write a C++ program to create an n x n matrix by
           taking an integer (n) as input from the user.
    sample Data:
sample1:
(2) ->
[ [ 2, 2],
[2, 2]]

sample2:
(5) ->
[ [ 5,5,5,5,5],
[ 5,5,5,5,5],
[ 5,5,5,5,5],
[ 5,5,5,5,5],
[ 5,5,5,5,5]]

sample Solution-2:
*/
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;



vector<vector<int>>test(int n){
    vector<int>vec_data(n,n);
    vector<vector<int>>arr(n,vec_data);

    return arr;
}


int main(){
    int n;
    cout<<"input an integer value:";
    cin>>n;

    vector<vector<int>>result=test(n);

    cout<<"create an n*n matrix by said integer.\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<result[i][j]<<" ";
        }

        printf("\n");
    }

    return 0;
}