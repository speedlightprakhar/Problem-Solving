// You are Given marks Of some students print the sum of the marks of top five students and the marks of last five students in decreasing order .
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int marks[n];
    for(int i=0;i<n;i++){
        cin >> marks[i];
    }
    sort(marks, marks+n, greater<int>());
    int sum = 0;
    for(int i=0;i<5 && i<n;i++){
        sum += marks[i];
    }
    cout << sum << endl;
    for(int i=0;i<5 && i<n;i++){
        cout << marks[n-1-i] << " ";
    }
    cout << endl;
    return 0;
}