//EECS 348 Lab 6
//Purpose: C++ code that performs various operations on sqaure matrices.
//Author: Anna Lin
//Last Modified: 19 Oct 2023

#include <iostream>
#include <fstream>

using namespace std;

static const int max1 = 10; //constant value for size of empty matrix
int matrix_A[max1][max1]; //empty matrix A
int matrix_B[max1][max1]; //empty matrix B
int size; //actual size of matrix

void read_file(){
    //Reads matrix data from a file and stores it in a 2D array.
    
    int n; //size of matrix given in file
    ifstream input_file;
    input_file.open("matrix_input.txt"); //opens input file
    input_file >> n; //sets the first line of file to n

    size = n; //sets the actual size of matrix to n

    //Iterates through first half of the file and stores it into matrix A.
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n; j ++){
            input_file >> matrix_A[i][j];
        }
    }
    //Iterates through second half of the file and stores it into matrix B.
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            input_file >> matrix_B[i][j];
        }
    }
}

void print_matrix(){
    //Prints matrix A and B.
   
    cout << "Anna Lin\n";
    cout << "Lab #6: Matrix Manipulation\n\n";
    cout << "Matrix A:\n";
    
    //Prints matrix A.
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout << matrix_A[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    cout << "Matrix B:\n";

    //Prints matrix B.
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout << matrix_B[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

void matrix_addition(){
    //Adds two matrices, stores the sum in a new array, and prints the sum of the matrices.
    
    int matrix_sum[size][size]; //empty matrix

    //Performs matrix addition and stores elements in matrix_sum.
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            matrix_sum[i][j] = matrix_A[i][j] + matrix_B[i][j];
        }
    }
    
    //Prints sum of matrices.
    cout << "Matrix Sum (A + B):\n";
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout.width(2);
            cout << right << matrix_sum[i][j] << " "; //right aligned
        }
        cout << "\n";
    }
    cout << "\n";
}

void matrix_multiplication(){
    //Multiples two matrices, stores the product in a new array, and prints the product of the matrices.

    int matrix_product[size][size]; //empty matrix
    
    //Performs matrix multiplication and stores elements in matrix_product.
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            matrix_product[i][j] = 0;
            for (int k = 0; k < size; k++){
                matrix_product[i][j] += matrix_A[i][k] * matrix_B[k][j]; //dot product
            }
        }
    }

    //Prints product of matrices.
    cout << "Matrix Product (A * B):\n";
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout.width(3);
            cout << right << matrix_product[i][j] << " "; //right aligned
        }
        cout << "\n";
    }
    cout << "\n";
}

void matrix_subtraction(){
    //Subtracts two matrices, stores the difference in a new array, and prints the difference of the matrices.

    int matrix_difference[size][size]; //empty matrix

    //Performs matrix subtraction and stores elements in matrix_difference.
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            matrix_difference[i][j] = matrix_A[i][j] - matrix_B[i][j];
        }
    }

    //Prints the difference of matrices.
    cout << "Matrix Difference (A - B):\n";
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout << matrix_difference[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

int main(){
    //Runs code.

    read_file();
    print_matrix();
    matrix_addition();
    matrix_multiplication();
    matrix_subtraction();
    return 0;
}
