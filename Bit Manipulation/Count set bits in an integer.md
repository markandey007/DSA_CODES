# [Count set bits in an integer](https://practice.geeksforgeeks.org/problems/set-bits0143/1)

```java
class Solution {
    static int setBits(int N) {
        int count = 0;
        while (N != 0) {
            count++;
            N = N & (N - 1);
        }
        return count;
    }
}
```