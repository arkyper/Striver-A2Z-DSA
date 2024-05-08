//   *
//  ***
// *****

void nStarTriangle(int n) {
    // Write your code here.
    for (int i = 1; i <= n; i++) {
        for (int j = n-i; j > 0; j--) {
            cout << " ";
        }
        for (int k = 1; k <= 2*i-1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}