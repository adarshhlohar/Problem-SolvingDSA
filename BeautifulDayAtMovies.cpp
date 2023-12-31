// Lily likes to play games with integers. She has created a new game where she determines the difference between a number and its reverse. For instance, given the number , its reverse is . Their difference is . The number  reversed is , and their difference is .

// She decides to apply her game to decision making. She will look at a numbered range of days and will only go to a movie on a beautiful day.

// Given a range of numbered days,  and a number , determine the number of days in the range that are beautiful. Beautiful numbers are defined as numbers where  is evenly divisible by . If a day's value is a beautiful number, it is a beautiful day. Return the number of beautiful days in the range.


#include <bits/stdc++.h>

using namespace std;

int reversDigits(int num) 
{ 
    int rev_num = 0; 
    while(num > 0) 
    { 
        rev_num = rev_num*10 + num%10; 
        num = num/10; 
    } 
    return rev_num; 
} 
int main(){
    int i ,j ,k,num,revi,count(0);
    cin>>i>>j>>k;
    while(i <= j){
        revi = reversDigits(i);
        num  = abs(i - revi);
        num %= k;
        if(num == 0) count++;
        i++;
    }
    cout<<count<<endl;
}
