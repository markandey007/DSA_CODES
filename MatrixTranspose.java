import java.util.Scanner;
class MatrixTranspose{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter no. of rows:	");
		int r=sc.nextInt();
		System.out.print("Enter no. of cols:	");
		int c=sc.nextInt();
		
		int m[][]=new int [r][c];
		//INPUT
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				System.out.print("Enter Element " + (i+1) + " " + (j+1) + ":	");
				m[i][j]=sc.nextInt();
			}
		}
		
		//OUTPUT
		System.out.println(":BEFORE TRANSPOSING:");
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				System.out.print(m[i][j] + "\t");
			}
			System.out.println();
		}
		
		System.out.println();
		System.out.println();
		System.out.println();
		
		System.out.println(":AFTER TRANSPOSING:");
		for(int i=0;i<c;i++){
			for(int j=0;j<r;j++){
				System.out.print(m[j][i] + "\t");
			}
			System.out.println();
		}
	}
}