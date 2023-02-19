import java.util.Scanner;

public class pg1
{
public static void main()
{
    Scanner sc = new Scanner(System.in);
    
    System.out.println("Enter a number - ");
    int num = sc.nextInt();
    
    int out =0;
    
    for (int i = 1; i<=num; i++)
    {
        out = (i*i)+1;
        System.out.println("  "+out);
    }
}
}
