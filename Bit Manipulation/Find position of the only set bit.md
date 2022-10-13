# [Find position of the only set bit](https://practice.geeksforgeeks.org/problems/find-position-of-set-bit3706/1)

```java
class Solution {
    static int findPosition(int N) {
        if (N == 0 || ((N & (N - 1)) != 0))
            return -1;

        int counter = 0;
        while (N != 0) {
            N >>= 1;
            counter++;
        }

        return counter;
    }
}
```