#include <iostream>
using namespace std;

class Matrix
{

    int **arr;
    int row;
    int col;

public:
    Matrix(int row, int col)
    {
        this->row = row;
        this->col = col;
        arr = new int *[row];
        for (int i = 0; i < col; i++)
        {
            arr[i] = new int[col];
        }
    }
    void setData(int val, int row, int col)
    {
        this->arr[row][col] = val;
    }
    void getMatrix()
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    Matrix transposeMatrix()
    {
        Matrix transpose(this->row, this->col);

        // transpose
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                transpose.arr[j][i] = this->arr[i][j];
            }
        }
        return transpose;
    }
    Matrix multiplyMatrix(Matrix transpose)
    {
        Matrix multiply(this->col, transpose.row);

        for (int i = 0; i < this->row; i++)
        {

            for (int j = 0; j < this->col; j++)
            {
                multiply.arr[i][j] = 0;
                for (int k = 0; k < this->col; k++)
                {
                    multiply.arr[i][j] += this->arr[i][k] * transpose.arr[k][j];
                }
            }
        }
        return multiply;
    }
};

int main()
{
    int row1, col1;
    cin >> row1 >> col1;
    Matrix matrix1(row1, col1);

    cout << endl;
    // matrix1
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            int k;
            cin >> k;
            matrix1.setData(k, i, j);
        }
    }
    cout << endl;
    int row2, col2;
    cin >> row2 >> col2;
    Matrix matrix2(row2, col2);

    // matrix2
    cout << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            int k;
            cin >> k;
            matrix2.setData(k, i, j);
        }
    }
    cout << endl;

    Matrix transpose1 = matrix1.transposeMatrix();
    Matrix transpose2 = matrix2.transposeMatrix();

    Matrix multiply1 = matrix1.multiplyMatrix(transpose1);
    Matrix multiply2 = matrix2.multiplyMatrix(transpose2);

    // matrix 3
    Matrix matrix3 = multiply1.multiplyMatrix(multiply2);

    cout << "Matrix 1" << endl;

    matrix1.getMatrix();

    cout << "Transpose 1" << endl;

    transpose1.getMatrix();

    cout << "Matrix 2" << endl;

    matrix2.getMatrix();

    cout << "Transpose 2" << endl;

    transpose2.getMatrix();

    cout << "Multiplication 1" << endl;

    multiply1.getMatrix();

    cout << "Multiplication 2" << endl;

    multiply2.getMatrix();

    cout << "Resultant Matrix" << endl;
    matrix3.getMatrix();
}
