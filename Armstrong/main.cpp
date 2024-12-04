#include <iostream>
using namespace std;
int main() {
    int num,temp,res=0,rem;
    cout<<"enter the number you want to check for armstrong";
    cin>>num;
    temp = num;
    while(temp!=0) {
        rem = temp % 10;
        res = res + (rem*rem*rem);
        temp = temp/10;
    }
    if(res == num) {
        cout<<num<<" is armstrong";
    }
    else
        cout<<num<<" is not an armstrong";
    return 0;
}
