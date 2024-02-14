/*
problem statement:Write a C++ program to capitalize the first character of 
       each element of a given string vector. Return the new vector.

->Sample Data:
({"red", "green", "black", "white", "Pink"}) ->
("Red", "Green", "Black", "White", "Pink"})

solution :1

*/
#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;

/*colors[i] is the string at index i in the colors vector. 
For example, if i = 0, colors[i] would be "ReD".

colors[i][j] is the character at index j in the string colors[i]. 
For example, if j = 1, colors[i][j] would be 'e'.

*/
vector<string>test(vector<string>colors){
       for(int i=0;i<colors.size();i++){
              colors[i][0]=toupper(colors[i][0]);
              for(int j=0;j<colors.size();j++){
                     colors[i][j]=tolower(colors[i][j]);
              }


       }
       return colors;
}


int main(){
       // vector<string>colors={"red","white","black","pink"};
       vector<string>colors={"reD", "grEeN", "blAcK", "whItE", "PiNK"};
       cout<<"Original elements:\n";
       for(string c:colors){
              cout<<c<<" ";
       }

       vector<string>result=test(colors);
       cout<<"\nCapitalize the first character of each vector elements:\n";
       for(string c:result){
              cout<<c<<" ";
       }
       return 0;
}