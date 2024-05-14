// 1
// 0 1
// 1 0 1


void nBinaryTriangle(int n) {
    // Write your code here.
    for (int i = 1; i <= n; i++) {
            int binary = 0;
            if (i%2==0)                         // Updating Binary If it's Even the it'll be '0' else '1'
                binary = 0;
            else 
                binary = 1;
        for (int j = 1; j <= i; j++) {
            cout << binary << " ";

            // if (binary == 1)                // Updating Binary
            //     binary = 0;
            // else 
            //     binary = 1;   

            binary = 1-binary;              // Better approach to Update Binary
        }
        cout << "\n";
    }
}