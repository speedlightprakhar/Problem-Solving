// Given a string S determine if it contains both the characters and an hashtag The length of the sting is even if both conditions are satisfied print YES otherwise print NO
//simple code
#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    //if()
   if(s.find('#')!=string::npos && s.find('&')!=string::npos && s.size()%2==0){
       cout << "yes" << endl;
   }
   else{
       cout << "no" << endl;
   }
    return 0;

    
}