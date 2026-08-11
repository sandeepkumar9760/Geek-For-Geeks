class Solution {
  public:
    void solve(int n, int &sum){
        if(n==0) return;
        int dig = n%10;
        sum += dig;
        n /=10;
        solve(n,sum);
    }
    int sumOfDigits(int n) {
        // code here
        int sum = 0;
        solve(n,sum);
        return sum;
    }
};