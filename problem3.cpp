//in phoneland avalid phoone number consists of 5 digits with no leading zero ex 12345.alex went to a store to purchased n items Where the cost of each item is X determine whether the total bill is equivalent to a valid phone number .
#include<iostream>
using namespace std;
int main(){
    
    int n, x;
    cin >> n >> x;
    int total = n * x;

    
    if (total >= 10000 && total <= 99999)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    

    return 0;
}