# [Count number of bits to be flipped to convert A to B](https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1)

```java
class Solution {

    public static int countBitsFlip(int a, int b) {
        int counter = 0;
        for (int i = 0; i < 32; i++) {
            if (((a ^ b) & 1 << i) != 0) {
                counter++;
            }
        }
        return counter;
    }
    
}
```