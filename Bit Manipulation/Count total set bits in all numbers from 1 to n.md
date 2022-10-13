# [Count total set bits in all numbers from 1 to n](https://practice.geeksforgeeks.org/problems/count-total-set-bits-1587115620/1)

Idea is to find out the largest power of two in n then we know that all the bits from 1 to that power of two upto msb - 1 would be set exactly largest power of 2 / 2 times and the msb will be set for remaning numbers + 1 times then we recurr for the remaining numbers.

Eg ->

N = 13

1 -> 0001
2 -> 0010
3 -> 0011
4 -> 0100
5 -> 0101
6 -> 0110
7 -> 0111
8 -> 1000
9 -> 1001
10 -> 1010
11 -> 1011
12 -> 1100
13 -> 1101

```java
class Solution {

    public static int countSetBits(int N) {

        if (N <= 1)
            return N;

        int msbPosition = (int) (Math.log(N) / Math.log(2));
        int largestPowOf2 = 1 << msbPosition;
        int remainingNumbers = N - largestPowOf2;
        return msbPosition * largestPowOf2 / 2 + remainingNumbers + 1 + countSetBits(remainingNumbers);

    }
}
```