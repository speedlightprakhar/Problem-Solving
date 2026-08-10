#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>vec ={1,2,3,6,9,5};
    // vector<int>vec(5,0);
    // cout<<vec[0]<<endl;
    // cout<<vec[1]<<endl;
    // cout<<vec[2]<<endl;
    // cout<<vec[3]<<endl;
    // cout<<vec[4]<<endl;
    // vector<char>vec = {'a','b','c','d','e','f'};
    vector<int>vec;
   
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    cout<<"vector size afer push_back=" << vec.size()<<endl;

    vec.pop_back();
    cout<<"vector size after pop_back="<<vec.size()<<endl;


    // for(int i :vec){ // range based for loop
    //     cout<<i<<endl;
    // }
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.at(1)<<endl;


    return 0;
}