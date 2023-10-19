//EECS 348 Lab 6
//Purpose: C++ code that
//Author: Anna Lin
//Last Modified: 

#include <iostream>
#include <fstream>

using namespace std;
static const int max1 = 10;
int matrix_A[max1][max1];
int matrix_B[max1][max1];
int size;

void read_file(){
    int n;
    ifstream input_file;
    input_file.open("matrix_input.txt");
    input_file >> n;

    size = n;

    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n; j ++){
            input_file >> matrix_A[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            input_file >> matrix_B[i][j];
        }
    }
}

void print_matrix(){
    cout << "Anna Lin\n";
    cout << "Lab #6: Matrix Manipulation\n\n";
    cout << "Matrix A:\n";
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout << matrix_A[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    cout << "Matrix B:\n";
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout << matrix_B[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

void matrix_addition(){
    int matrix_sum[size][size];
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            matrix_sum[i][j] = matrix_A[i][j] + matrix_B[i][j];
        }
    }
    
    cout << "Matrix Sum (A + B):\n";
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout.width(2);
            cout << right << matrix_sum[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

void matrix_multiplication(){
    int matrix_product[size][size];
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            matrix_product[i][j] = 0;
            for (int k = 0; k < size; k++){
                matrix_product[i][j] += matrix_A[i][k] * matrix_B[k][j];
            }
        }
    }

    cout << "Matrix Product (A * B):\n";
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout.width(3);
            cout << right << matrix_product[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

void matrix_subtraction(){
    int matrix_difference[size][size];
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            matrix_difference[i][j] = matrix_A[i][j] - matrix_B[i][j];
        }
    }

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
    read_file();
    print_matrix();
    matrix_addition();
    matrix_multiplication();
    matrix_subtraction();
    return 0;
}
