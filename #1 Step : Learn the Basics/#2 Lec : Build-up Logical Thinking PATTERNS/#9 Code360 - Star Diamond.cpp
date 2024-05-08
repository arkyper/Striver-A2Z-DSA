//   *
//  ***
// *****
// *****
//  ***
//   *

void nStarDiamond(int n) {
    // Write your code here.
    for (int i = 1; i <= n; i++) {              // Top Star Triangle
        for (int j = n-i; j > 0; j--) {
            cout << " ";
        }
        for (int k = 1; k <= 2*i-1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n; i > 0; i--) {               // Bottom Star Triangle
        for (int j = n-i; j > 0; j--) {
            cout << " ";
        }
        for (int k = 1; k <= 2*i-1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}