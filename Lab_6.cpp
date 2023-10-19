//EECS 348 Lab 6
//Purpose: C++ code that
//Author: Anna Lin
//Last Modified: 

#include <iostream>
#include <fstream>

using namespace std;
static const int max = 10;
int matrix_A = [max][max];
int matrix_B = [max][max];
int size;

void read_file(int A[10][10], int B[10][10]){
    int n;
    ifstream input_file;
    input_file.open("matrix_input.txt");
    input_file >> n;

    int size = n;

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

void print_matrix(int A[10][10], int B[10][10]){
    cout << "Anna Lin\n";
    cout << "Lab #6: Matrix Manipulation\n\n";
    cout << "Matrix A:\n";
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout << matrix_A[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Matrix B:\n";
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout << matrix_B[i][j] << " ";
        }
        cout << "\n";
    }
}

void matrix_addition(int A[10][10], int B[10][10]){
    int matrix_sum[size][size];
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            matrix_sum[i][j] = matrix_A[i][j] + matrix_B[i][j];
        }
    }
    
    cout << "Matrix Sum (A + B):\n";
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout << matrix_sum[i][j] << " ";
        }
        cout << "\n";
    }
}

void matrix_multiplication(int A[10][10], int B[10][10]){
    int matrix_product[size][size];
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            matrix_product[i][j] = matrix_A[i][j] + matrix_B[i][j];
        }
    }

    cout << "Matrix Product (A * B):\n";
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout << matrix_product[i][j] << " ";
        }
        cout << "\n";
    }
}

void matrix_subtraction(int A[10][10], int B[10][10]){
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
}
int main(){
    read_file(matrix_A, matrix_B);
    print_matrix(matrix_A, matrix_B);
    matrix_addition(matrix_A, matrix_B);
    matrix_multiplication(matrix_A, matrix_B);
    matrix_subtraction(matrix_A, matrix_B);
    return 0;
}
