import io.github.pixee.security.BoundedLineReader;
import java.io.*;
public class FloydTrg{
    void gen(int n){
        int c=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++)
                System.out.print(++c+" ");
            System.out.println();
        }
    }
    
    public static void main(String args[])throws IOException
    {
        System.out.println("Enter the line numbers:");
        new FloydTrg().gen(Integer.parseInt(BoundedLineReader.readLine(new BufferedReader(new InputStreamReader(System.in)), 5_000_000)));
    }
}
