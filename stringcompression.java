import java.io.*;
import java.util.*;
import java.lang.*;

public class stringcompression {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        String str = scn.next(); // taking input as a string
        System.out.println(compression1(str));
        System.out.println(compression2(str));
    }

    public static String compression1(String str) //1st compression example: input-ppppqqqrrrsss; output-pqrs
    {
        String s = str.charAt(0) + "";
        for (int i = 1; i < str.length(); i++) {
            char curr = str.charAt(i);
            char prev = str.charAt(i - 1);

            if (curr != prev) {
                s += curr;
            }

        }
        return s;
    }

    public static String compression2(String str) //2nd compression example: input-ggggbbrrrtttt; output-g4b2r3t4
    {
        String s = str.charAt(0) + "";
        int count = 1;
        for (int i = 1; i < str.length(); i++) {
            char curr = str.charAt(i);
            char prev = str.charAt(i - 1);

            if (curr == prev) {
                count++;
            } else {
                if (count > 1) {
                    s += count;
                    count = 1;
                }
                s += curr;
            }
        }

        if (count > 1) {
            s += count;
            count = 1;
        }
        return s;

    }

}
