//Window sliding technique

/*=>Sliding Window use when in the question 
=>ask the subarray or substring with 
=>(largest+ max or Min) of k and or the window size.

then use the sliding window concept and in that window never
    break always with the seq and not the break between them. */


// problems is given that 
// Example: Given an array of integers of size ‘n’, Our aim is to calculate the maximum sum of ‘k’ consecutive elements in the array.
/*
 Input  : arr[] = {100, 200, 300, 400}, k = 2
 Output : 700
 */

/*brute force approach with two loop and second loop doing the till k and then update the max sum of the given that.  */

public class Problem{
    public static void main(String[] args){
        int[] arr = {100,200,300,400};
        int k = 2 ;
        int n = arr.length;

        int a = maxofSum(arr,k,n);
        System.out.print(a); 

    }

    static int maxofSum(int[] a,int k,int n){
        int max = Integer.MIN_VALUE;
        
        for(int i=0;i<n-k+1;i++){
            int sum = 0;
            for(int j=0;j<k;j++){
                sum+=a[i+j];
            }

            if(max<sum)
                max = sum ;
        }
        return max;
    }
}