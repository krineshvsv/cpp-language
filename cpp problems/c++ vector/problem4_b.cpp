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

        std::transform(colors[i].begin(), colors[i].end(), colors[i].begin(), ::tolower);
        colors[i][0] = toupper(colors[i][0]);

        /*
        Original vector: {"reD", "grEeN", "blAcK", "whItE", "PiNK"}

After std::transform(colors[i].begin(), colors[i].end(), colors[i].begin(), ::tolower);:

colors[0] becomes "red"
colors[1] becomes "green"
colors[2] becomes "black"
colors[3] becomes "white"
colors[4] becomes "pink"
After colors[i][0] = toupper(colors[i][0]);:

colors[0] becomes "Red" (capitalized first character)
colors[1] becomes "Green" (capitalized first character)
colors[2] becomes "Black" (capitalized first character)
colors[3] becomes "White" (capitalized first character)
colors[4] becomes "Pink" (capitalized first character)
So, the final vector would be {"Red", "Green", "Black", "White", "Pink"}, where each
string has its first character capitalized and the rest of the characters 
converted to lowercase.
        */
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

/*
NOtes:

1)transform function:
->transform() in C++ is used in two forms: 
1. Unary Operation : Applies a unary operator on input to convert into output 

transform(Iterator inputBegin, Iterator inputEnd, 
         Iterator OutputBegin, unary_operation) 


2. Binary Operation: Applies a binary operator on input to convert into output 

transform(Iterator inputBegin1, Iterator inputEnd1, 
         Iterator inputBegin2, Iterator OutputBegin, 
         binary_operation) 
The example mentioned above for adding two arrays is an example of transform with binary operation. 

More examples: 
We can use transform to convert a string to upper case (See this) 
We can modify above examples for vectors also. 

    
    // vect is a vector of integers.
    transform(vect.begin(), vect.end(), 
              vect.begin(), increment); 

*/