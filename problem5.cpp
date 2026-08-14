// Give a list of impulsive integer you need to find out the count of odds and even integer is the count of odd integer are greater than the count of even integer print odd without codes if the count of even integer are greater than the count of odd integer print even without codes print tie without codes if count of odds and even and integers are equal
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int oddCount = 0, evenCount = 0;
    for(int i=0;i<n;i++){
        if(v[i] % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
    }
    if(oddCount > evenCount){
        cout << "odd" << endl;
    } else if(evenCount > oddCount){
        cout << "even" << endl;
    } else {
        cout << "tie" << endl;
    }
}
