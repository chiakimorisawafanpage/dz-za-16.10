#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "введите размер матрицы - ";
    cin >> N;
    int counter = 1;
    int matrix[100][100];

    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < N; j++) {
                matrix[i][j] = counter++;
            }
        }
        else {
            for (int j = N - 1; j >= 0; j--) {
                matrix[i][j] = counter++;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j]<< " ";
        }
        cout << '\n';
    }


    return 0;
}
