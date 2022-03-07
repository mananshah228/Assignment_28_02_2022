/*
Create a class called &#39;Matrix&#39; containing a constructor that initialises the number of rows and the
number of columns of a new Matrix object. The Matrix class has the following information:
1 - number of rows of matrix
2 - number of columns of matrix
3 - elements of matrix (You can use 2D vector)
The Matrix class has functions for each of the following:

1 - get the number of rows
2 - get the number of columns
3 - set the elements of the matrix at a given position (i,j)
4 - adding two matrices.
5 - multiplying the two matrices
You can assume that the dimensions are correct for the multiplication and addition.
*/

#include <iostream>
#include <vector>

using namespace std;

class Matrix {

    private:
        int rows,columns;

        // initializing 2d vectors as matrix
        vector<vector<int>> v1 = {{1,2,3}, 
                                 {4,5,6}, 
                                 {7,8,9}};

        vector<vector<int>> v2 = {{1,2,3}, 
                                 {4,5,6}, 
                                 {7,8,9}};

        vector<vector<int>> v3 = {{0}, {0}, {0}};


    public:

        Matrix(int r, int c) {      // definiting constructor

            rows = r;
            columns = c;
        }

        void getRows() {
            cout << "The number of rows are: " << rows << endl;
        }

        void getColumns() {
            cout << "The number of columns are: " << columns << endl;
        }

        void setElement(int ele, int i, int j) {

            v1[i][j] = ele;

            // replacing a element of matrix from a specific location
            for(int i=0;i<v1.size();i++) {
                for(int j=0;j<v1[i].size();j++)
                    cout<<v1[i][j]<<" ";
                cout<<endl;
            } 
        }

        void addMatrix() {

            // matrix additon algorithm
            for(int i=0;i<v1.size();i++) {
                for (int j=0;j<v1.size();j++) {
                    v3[i][j] = v1[i][j] + v2[i][j];
                    cout << v3[i][j] << " ";
                }
                cout << endl;
            }
        }

        void multiplyMatrix() {

            //  matrix multiplication algorithm
            for (int i=0;i<v1.size();i++) {
                for (int j=0;j<v2.size();j++) {
                    v3[i][j] = 0;

                    for (int k=0;k<v2.size();k++) {
                        v3[i][j] += v1[i][k] * v2[k][j];
                    }

                    cout << v3[i][j] << " ";
                }

                cout << endl;
            }
        }
};

int main() {

    Matrix m1(3,3);     // calling parameterized constructor

    m1.getRows();
    m1.getColumns();

    cout << "The matrix m1 after change in value is: " << endl;
    m1.setElement(10, 1, 1);

    cout << endl << "Addition of two matrix is: " << endl;
    m1.addMatrix();

    cout << endl << "Multiplication of two matrix is: " << endl;
    m1.multiplyMatrix();

    return 0;
}