bool checkArmstrong(int n){
	//Write your code here
	int orgNum = n, armStrong = 0, digit = 0;
	digit = log10(n) + 1;					// Shortcut to find No. of Digits of any Number
	while (n) {
		armStrong += pow(n%10, digit);
		n /= 10;
	}
	if (orgNum == armStrong) 
		return true;
	return false;
}
