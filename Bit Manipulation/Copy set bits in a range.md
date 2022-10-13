# [Copy set bits in a range](https://www.pepcoding.com/resources/data-structures-and-algorithms-in-java-levelup/bit-manipulation/copy-set-bits-in-a-range-official/ojquestion)


```java
import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int a = scn.nextInt();
        int b = scn.nextInt();
        int l = scn.nextInt();
        int r = scn.nextInt();

        int mask = 0;
        for (int i = l - 1; i < r; i++) {
            mask |= 1 << i;
        }

        b |= (mask & a);

        System.out.println(b);
    }
}
```