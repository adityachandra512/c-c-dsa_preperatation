#define M00 mat[0][0]
#define M01 mat[0][1]
#define M02 mat[0][2]
#define M10 mat[1][0]
#define M11 mat[1][1]
#define M12 mat[1][2]
#define M20 mat[2][0]
#define M21 mat[2][1]
#define M22 mat[2][2]

#include<iostream>
using namespace std;

int main() {
    int mat[3][3];
    int determinant;
    int i, j;

    cout << "Enter the values of the matrix (3x3):" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "Entered matrix:" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    determinant = M00 * (M11 * M22 - M21 * M12)
                - M01 * (M10 * M22 - M20 * M12)
                + M02 * (M10 * M21 - M20 * M11);

    cout << "Determinant of the matrix is: " << determinant << endl;

    return 0;
}
