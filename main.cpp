#include <iostream>
using namespace std;
// list 1 = {1,3,7,8}
// list2 = {2,3,5,6}
//result = {1,2,3,3,5,6,7,8}
#include <iostream>
using namespace std;

int main()
{
    int list1[] = {1,3,7,8};
    int num1 = sizeof(list1)/sizeof(list1[0]);
    // int result[num1];
    int list2[] = {2,3,5,6};
    int num2 = sizeof(list2)/sizeof(list2[0]);

    cout << num1 << " " << num2 << endl;

    int result[num1+num2];
    int i=0, j=0, k =0;
    while(i < num1 && j < num2) {
        if(list1[i] < list2[j]) {
            result[k++] = list1[i++];
            //i++;
            //k++;
        }
        else {
            result[k++] = list2[j++];
            //j++;
            //k++;
        }
    }

    while(i<num1) {
        result[k++] = list1[i++];
        // i++;
        //k++;
    }
    while(j<num2) {
        result[k++] = list2[j++];
        //  j++;
        // k++;
    }
    for(i=0; i<num1; i++) {
        cout << list1[i] << " ";
    }
    cout << endl;
    for(j=0; j<num2; j++) {
        cout << list2[j] << " ";
    }
    cout << endl;
    cout << "the sorted together array is :" << " ";
    for(int m=0; (m<(num1+num2)); m++) {
        cout << result[m] << " ";
    }
    return 0;
}

