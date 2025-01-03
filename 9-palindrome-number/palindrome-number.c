bool isPalindrome(int x) {
    int d, temp = x;
    long long rev = 0;
    while(x>0){
    d = x%10;
    rev= rev*10 +d;
    x = x/10;
    }
 return (temp == rev);
}