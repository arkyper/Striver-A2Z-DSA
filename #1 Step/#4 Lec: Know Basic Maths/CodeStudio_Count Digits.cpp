int countDigits(int n){
	// Write your code here.
	int count = 0, digit = 0, orgNum = n;
	while (n > 0) {
		digit = n%10;		// Extracting Digits
		if (digit != 0 && orgNum%digit == 0)		// Checking if the Digit is 0 & If Number is completely Divisible by Digit
			count++;		// Increasing Count
		n = n/10;			// Updating number
	}
	return count;
}