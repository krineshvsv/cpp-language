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

sample Solution-1:
*/

#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;


//test(n) function

std::vector<std::vector<int>>test(int n){

    std::vector<int>t(n,n); // Creating a vector 't' of size 'n' filled with 'n'

    std::vector<std::vector<int>>arr(n,t); // Creating a 2D vector 'arr' of size 'n x n' filled with vector 't'
    
    /* std::vector<std::vector<int>>arr(n,t);

    -> in this line 'arr' is a 2-D vector with 'n' rows and 'n' columns,
      ->where each cell contain the value'n'.
      ->visually it look like this for'n=3';
      ->
    
     [ [3, 3, 3],
       [3, 3, 3],
       [3, 3, 3] ]

    
    */

    return arr; // Returning the 'n x n' matrix

    /*return arr;
    ->this line returns the 2-D vector 'arr' which represents an 'n x n'
    matrix where each element is initialized to the value n.

    ->So, the function test(int n) generates and returns an n x n matrix 
    where each element of the matrix has the value n.
    
    */
}







int main(){
    int n;
    cout<<"input an integer value:";
    cin>>n;

    std::vector<std::vector<int>>result=test(n);//2-D vector

    cout<<"create an n*n matrix by said integer/\n";

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
