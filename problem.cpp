//count intiger in given reange defined by two values,start and end (boath inclusive) which are devisible by 3 and sum of its digits is even.
//two lines of input. the first line contains two integers start and end the second line contains the value of end

#include<iostream>
using namespace std;
int main(){
     int start, end;
    cin >> start >> end;
    int count = 0;
    for(int i = start; i <= end; i++){
        if(i % 3 == 0){
            int sum = 0;
            
            int num = i;
            while(num > 0){
                sum += num % 10;//sum of digits
                num /= 10;//remove last digit
            }
            if(sum % 2 == 0){
                count++;
            }
        }
    }
    cout << count << endl;
}
//explanation: The code counts the number of integers in a given range 
//(from 'start' to 'end', inclusive) that are divisible by 3 and have an even sum of their digits. 
//It reads two integers from input, iterates through the range, checks the divisibility and digit sum conditions, 
//and outputs the count of such integers.
    