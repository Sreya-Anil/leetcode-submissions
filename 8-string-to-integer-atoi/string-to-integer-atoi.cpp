class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        int i = 0;

        while (i < s.size() && s[i] == ' ') {
            i++;
        }
        if (i == s.size()) {
            return 0;
        }

        if (s[i] == '-') {
            sign = -1;
            i++;
        } else if (s[i] == '+') {
            i++;
        }

        long res = 0;
        while (i < s.size() && isdigit(s[i])) {
            res = res * 10 + (s[i] - '0');

            if (res * sign > INT_MAX)
                return INT_MAX;
            if (res * sign < INT_MIN)
                return INT_MIN;

            i++;
        }
        return (int)(sign * res);
    }
};