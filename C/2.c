/*
Write a function that receives marks received by a student in 3 subjects
and returns the total and percentage of these marks. Call this function from
main( ) and print the results in main( ).
*/

#include <stdio.h>

using namespace std;

void func(int s1, int s2, int s3, float *total, float *perc) {

    // calculation total and percentage
    *total = s1+s2+s3;
    *perc = (*total*100)/300;
}
int main() {

    int s1, s2, s3; 
    float total, perc;

    printf("Enter marks of 1st subject: ");
    scanf("%d",&s1);

    printf("Enter marks of 2nd subject: ");
    scanf("%d",&s2);

    printf("Enter marks of 3rd subject: ");
    scanf("%d",&s3);

    func(s1, s2, s3, &total, &perc);        // calling func function by passing 3 variables and 2 address as reference

    // printing the result which is obtained from function func which is directly changed by address
    printf("The total of 3 subject is: %.2f", total);
    printf("\nThe percentage of 3 subject is: %.2f", perc);

    return 0;
}