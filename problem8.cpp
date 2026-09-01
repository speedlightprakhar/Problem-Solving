// Given an alphanumeric string as let the sum of square of digit in S be K if K is even rotate the alphabets of string's rightward by K position otherwise rotated leftward by K position print the rotated string. Input format 1st line contain an integer denoting the length of the string and the 2nd line containing the string Output format SINGLE line output containing the rotated string .
//sort code
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int sum_of_squares = 0;
    for (char c : s) {
        if (isdigit(c)) {
            int digit = c - '0';
            sum_of_squares += digit * digit;
        }
    }

    int k = sum_of_squares % n; // Ensure K is within the bounds of the string length

    string rotated_string;
    if (sum_of_squares % 2 == 0) {
        // Right rotation
        rotated_string = s.substr(n - k) + s.substr(0, n - k);
    } else {
        // Left rotation
        rotated_string = s.substr(k) + s.substr(0, k);
    }

    cout << rotated_string << endl;

    return 0;
}