#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Matrix multiplication
vector<vector<long long>> multiply(vector<vector<long long>> A, vector<vector<long long>> B) {
    int n = A.size();
    vector<vector<long long>> C(n, vector<long long>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

// Matrix exponentiation
vector<vector<long long>> matrixExponentiation(vector<vector<long long>> A, long long n) {
    int nA = A.size();
    vector<vector<long long>> R(nA, vector<long long>(nA, 0));
    for (int i = 0; i < nA; i++) {
        R[i][i] = 1;
    }
    while (n > 0) {
        if (n & 1) {
            R = multiply(R, A);
        }
        A = multiply(A, A);
        n >>= 1;
    }
    return R;
}

int main() {
    long long n;
    cin >> n;

    // Define the transition matrix
    vector<vector<long long>> T = {{4, 1}, {1, 0}};

    // Compute T^n
    vector<vector<long long>> Tn = matrixExponentiation(T, n - 2);

    // Compute t(n) = Tn[0][0] * t(2) + Tn[0][1] * t(1)
    long long t2, t1;
    cin >> t2 >> t1;
    long long tn = Tn[0][0] * t2 + Tn[0][1] * t1;

    cout << tn << endl;

    return 0;
}
