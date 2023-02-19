import java.util.Scanner;

public class pg6
{
public static void main()
{
    Scanner sc = new Scanner(System.in);
    
    System.out.println("Enter a number :");
    int num = sc.nextInt();
    
    int out = 0, m=1;
    
    for (int i = 1; i<num; i++)
    {
        m=m+m;
        out += m; 
    }
    System.out.println("  "+(out+1));
}
}
