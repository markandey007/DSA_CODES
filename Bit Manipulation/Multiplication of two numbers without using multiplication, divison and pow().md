# Variation 1

## Multiply two numbers

### Approach 1 (Russian Peasant Multiplication Algorithm)

```java
long rupm(long a, long b) {
    if (a == 1) return b;
    else if (a % 2 == 0) return rupm(a >> 1, b << 1);
    else return b + rupm(a >> 1, b << 1);
}
```

### Approach 2 (Binary Thinking)

The idea is to break one of the number into its power of two and other number as it is, we know to multiply a number by 2^i we just have to left shift the number `i` times.

example -> 11 * 17 = (2^3 + 2^1 + 2^0) * 17 = 17 << 3 + 17 << 1 + 17 << 0

```java
public class Solution {
    public static int mul(int n, int m) {
        int res = 0;
        for (int i = 31; i >= 0; i--) {
            int x = 1 << i;
            if ((x & n) != 0) {
                res += m << i;
            }
        }
        return res;
    }
}
```


# Variation 2

## [Calculate square of a number without using multiplication, divison and pow()](https://www.codingninjas.com/codestudio/problems/calculate-square-of-a-number_1112623)

```java
public class Solution {
    public static int calculateSquare(int num) {
        long res = 0;
        for (int i = 31; i >= 0; i--) {
            int x = 1 << i;
            if ((x & num) != 0) {
                res += num * 1L << i;
            }
        }
        return (int) res;
    }
}
```