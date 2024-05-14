// *
// **
// ***
// **
// *


void nStarTriangle(int n) {
    // Write your code here.
    for (int i = 1; i <= 2*n-1; i++) {
        int star = i;
        if (i > n)
            star = 2*n-i;                   // Once start reach to 'n' then we'll reverse that
        for (int j = 1; j <= star; j++) {
            cout << "*";
        }
        cout << "\n";           // Faster than 'endl'
        // cout << endl;           // 'endl' flushes the output buffer and '\n' doesn't
    }
}