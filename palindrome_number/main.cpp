#include <iostream>
using namespace std;
int main()
{
    int num, temp, rev = 0, rem;
    cout<<"enter the number that you want to check for palindrome";
    cin>>num;
    temp = num;
    while(temp!=0) {
        rem = temp%10;
        rev = (rev*10) + rem;
        temp = temp/10;
    }
    if(rev == num) {
        cout<<num<<" is a palindrome number";
    }
    else
        cout<<num<<" is not a palindrome number";
    return 0;
}
