import java.util.*;
import java.lang.*;
import java.io.*;

public class WaveTraversal {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();// taking input size of rows in matrix
        int m = scn.nextInt();// taking input size of column in matrix
        int[][] arr = new int[n][m];// taking input of elements in the matrix 
        for (int i = 0; i < arr.length; i++) 
        {
            for (int j = 0; j < arr[0].length; j++)
            {
                arr[i][j] = scn.nextInt();
            }
        }

        for (int j = 0; j < arr[0].length; j++) // loop for column
        {
            if (j % 2 == 0) // if column is even
             {
                for (int i = 0; i < arr.length; i++)
                {
                    System.out.println(arr[i][j]);
                }
            }
            else // column is odd
            {
                for (int k = arr.length - 1; k >= 0; k--) 
                {
                    System.out.println(arr[k][j]);
                }
            }
        }
    }
}
