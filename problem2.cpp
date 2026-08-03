//two numbrs n and k repeatedly add the cocatinated number until get single digit number

#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    while(n>9){
        int sum = 0;
        while(n > 0){
            sum += n % 10;
            n /= 10;
        }
        n = sum * k;
    }
    cout << n << endl;
}