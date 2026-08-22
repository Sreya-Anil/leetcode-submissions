class Solution {
public:
    bool checkDivisibility(int n) {
        int og=n;
        int digitsum=0;
        int digitproduct=1;
        while(n>0)
        {
            int digit=n%10;
            digitsum+=digit;
            digitproduct*=digit;
            n/=10;

        }
        int final=digitsum+digitproduct;
        return (og%final==0);
    }
};