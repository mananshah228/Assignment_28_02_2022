/*
Write a program by creating an &#39;Employee&#39; class having the following functions and print the
final salary.
1 - &#39;getInfo()&#39; which takes the salary, number of hours of work per day of employee as
parameters
2 - &#39;AddSal()&#39; which adds $10 to the salary of the employee if it is less than $500.
3 - &#39;AddWork()&#39; which adds $5 to the salary of the employee if the number of hours of work per
day is more than 6 hours.
*/

#include <iostream>

using namespace std;

// declaring and defining class Employee
class Employee {

    private:
        int salary, hrs;

    public:

        void getInfo(int pay, int work_hrs) {

            // initializing private data members
            salary = pay;
            hrs = work_hrs;
        }

        void AddSal() {

            salary += 10;
        }

        void AddWork() {

            salary += 5;
        }

        int getSalary() {

            return salary;      // returning final salary amount of object
        }
};

int main() {        // initializing the execution from main

    Employee e1;        // initiazing object e1 of class Employee
    int pay, work_hrs;

    cout << "Enter salary of employee: ";
    cin >> pay;

    cout << "Enter number of hours worked: ";
    cin >> work_hrs;

    e1.getInfo(pay, work_hrs);      // calling getInfo function of class Employee

    if (pay < 500) {
        e1.AddSal();        // calling AddSal function of class Employee
    }

    if (work_hrs > 6) {
        e1.AddWork();       // calling AddWork function of class Employee
    }

    cout << "The final salary of employee is: " << "$" << e1.getSalary();      // printing the final salary

    return 0;
}