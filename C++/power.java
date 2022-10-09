 





import java.util.*;      // here we imprort the Scanner class
class power
 {
    public static long power(long x, long y)  // we take two long arguments
    {
        if(y==0) return 1;
        if(y%2 == 0) return power(x, y/2)*power(x, y/2);
        return power(x, y/2)*power(x, y/2)*x;
    }
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);
        long x, y, z=0;
        System.out.println("Enter 2 numbers. We will find out the value of x^y.");
        x=in.nextLong();
        y=in.nextLong();
        z=power(x,y);            // z is keeping the result
        System.out.println("x^y = "+ z);
    }
}
