/*statement:Write a C++ program to verify that all of the letters in the second string appear in
            the first string as well. Return true otherwise false.

Sample Data:
({"Python", "Py"}) -> 1
({"CPP", "C++"}) ->.0


*/

#include<algorithm>
#include<vector>
#include<iostream>
#include<string>
using namespace std;

bool test(vector<string>str){

    for(auto ch:str.at(1)){
        if(str.at(0).find(toupper(ch)) == string::npos && str.at(0).find(tolower(ch)) == string::npos){
            return false;
        }
        
    }
    return true;
}

int main(){
    vector<string>str={"python","py"};
    cout<<"Original elements:\n";
    for(string c:str){
        cout<<c<<" ";
    }

    cout<<"\n check first string contains all letters from second string:";
    bool result=test(str);
    cout<<result<<" ";

    return 0;

}


/*
 ->Suppose we have the following string:
    string str = "Hello, World!";
    char ch = 'x';


   // if (strs.at(0).find(toupper(ch)) == string::npos   
       &&    
  //strs.at(0).find(tolower(ch)) == string::npos)


let's break down each step with more detail and examples:

1.  strs.at(0) - This accesses the first element of the vector strs.
 For example, if strs is a vector of strings and strs.at(0) is "Hello", it means we are
  accessing the first string "Hello" in the vector.


2.  toupper(ch) and tolower(ch) - These functions convert the character ch to its
 uppercase and lowercase versions, respectively. For example, if ch is 'a', then 
 toupper(ch) would be 'A' and tolower(ch) would still be 'a'.


3.  strs.at(0).find(toupper(ch)) - This checks if the uppercase version of the character ch
 is present in the first string of the vector strs. For example, if strs.at(0) is "Hello" 
 and ch is 'e', then strs.at(0).find(toupper(ch)) would return the index 1 because the
 uppercase version of 'e' (which is 'E') is found at index 1 in the string "Hello".
  If the character is not found, it will return string::npos.





  

->string::npos--> it is used to indicate a position or size that is not found or does
            not exist within the string.
When using the find function on a string, if the substring or character being searched for is 
not found, the find function returns ::npos to indicate that the search item is
 not present in the string.

For example:

std::string str = "Hello, World!";
size_t found = str.find('x');
if (found == std::string::npos) {
    std::cout << "The character 'x' is not found in the string." << std::endl;
}
In this example, str.find('x') returns std::string::npos because the character 'x'
 is not found in the string "Hello, World!".







4.strs.at(0).find(tolower(ch)) - This checks if the lowercase version of the character ch 
is present in the first string of the vector strs.
 Using the same example, strs.at(0).find(tolower(ch)) would return 1 
 because the lowercase version of 'e' is found at index 1 in the string "Hello". 
 If the character is not found, it will return string::npos.



The if statement checks if both toupper(ch) and tolower(ch) are not found in the first string. If both are not found, it returns "false". For example, if ch is 'x' and the first string is "Hello, World!", since 'x' is not found in the string in either its uppercase or lowercase form, the function would return "false".



















*/