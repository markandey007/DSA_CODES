# [Find the two non-repeating elements in an array of repeating elements](https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1#)

```java
class Solution {
    public int[] singleNumber(int[] nums) {
        int xor = 0;
        for (int num : nums) {
            xor ^= num;
        }

        int check = xor & ~(xor - 1);
        int a = 0;
        int b = 0;
        for (int num : nums) {
            if ((num & check) != 0) {
                a ^= num;
            } else {
                b ^= num;
            }
        }

        return new int[] { Math.min(a, b), Math.max(a, b) };
    }
}
```