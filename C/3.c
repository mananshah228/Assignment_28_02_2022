/*
Search and Sequence
Consider an integer array ‘a’ of size 10, where the value of the array elements are
{1,5,4,8,9,2,0,6,11,7}. Write a program to
▪ Find whether the given element exists in an array or not. If the element exists in an
array, display YES else NO.
▪ To print a number following a sequence of elements in an array i.e., 15489206117.
*/

#include <stdio.h>

using namespace std;

int main() {

    int a[10] = {1,5,4,8,9,2,0,6,11,7};
    int ele, temp = 0;

    printf("Enter element to search in array: ");
    scanf("%d",&ele);

    for (int i=0;i<10;i++) {
        if (a[i] == ele) {
            temp = 1;       // setting flag value
            break;
        }
    }

    // scaning flag value to print the final result
    if (temp == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    // printing the array in sequence
    for (int i=0;i<10;i++) {
        printf("%d",a[i]);
    }
    
    return 0;
}