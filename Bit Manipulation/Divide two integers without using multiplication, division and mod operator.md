# [Divide two integers without using multiplication, division and mod operator](https://leetcode.com/problems/divide-two-integers/)

Idea is to find out the number of times divisor should be multiplied by 2 to not exceed dividend.

```java
class Solution {
    public int divide(long dividend, long divisor) {
        boolean isNegative = dividend < 0 ^ divisor < 0;
        dividend = Math.abs(dividend);
        divisor = Math.abs(divisor);

        long res = helper(dividend, divisor);

        if (isNegative && res > 1L << 31)
            return Integer.MIN_VALUE;
        else if (!isNegative && res > (1L << 31) - 1)
            return Integer.MAX_VALUE;

        return (int) (isNegative ? -1L * res : res);
    }

    public long helper(long dividend, long divisor) {
        if (dividend < divisor)
            return 0;

        long cnt = -1L;
        long prev = 0L;
        long temp = divisor;
        while (temp <= dividend) {
            prev = temp;
            temp <<= 1L;
            cnt++;
        }

        return (1L << cnt) + divide(dividend - prev, divisor);
    }
}
```