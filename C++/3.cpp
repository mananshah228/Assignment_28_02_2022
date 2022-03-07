/*
Suppose you have a Piggie Bank with an initial amount of Rs.50 and you have to add some
more amount to it. Create a class &#39;AddAmount&#39; with a data member named &#39;amount&#39; with an
initial value of Rs. 50. Now make two constructors of this class as follows:
1 - without any parameter - no amount will be added to the Piggie Bank
2 - having a parameter which is the amount that will be added to the Piggie Bank
Create an object of the &#39;AddAmount&#39; class and display the final amount in the Piggie Bank.
*/

#include <iostream>

using namespace std;

class AddAmount {

    private:
        int amount = 50;        // initializing private data member with initial value of 50

    public:

        AddAmount() {       // initializing default constructor

            cout << "The amount in the Piggie Bank is: " << amount << " Rs." << endl;
        }

        AddAmount(int x) {      // initializing parameterized constructor

            amount += x;

            cout << "The amount in the Piggie Bank is: " << amount << " Rs." << endl;
        }
};

int main() {

    AddAmount p1, p2(50);       // calling p1 and p2 to default and parameterized constructor

    return 0;
}