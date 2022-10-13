# [Program to find whether a no is power of two](https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1)


```java
class Solution {

    public static boolean isPowerofTwo(long n) {
        return n != 0 && (n & (n - 1)) == 0;
    }

}
```