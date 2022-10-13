# [Power Set](https://practice.geeksforgeeks.org/problems/power-set4302/1)

```java
class Solution {
    public List<String> AllPossibleStrings(String s) {
        int n = s.length();

        List<String> res = new ArrayList<>();

        char[] str = s.toCharArray();

        for (int i = ((1 << n) - 1); i > 0; i--) {
            int j = 1 << (n - 1);
            int l = 0;
            String temp = "";
            for (int k = 0; k < n; k++) {
                if ((j & i) != 0) {
                    temp += s.charAt(l);
                }
                l++;
                j >>= 1;
            }
            res.add(temp);
        }

        Collections.sort(res);
        return res;
    }
}
```