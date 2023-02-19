import java.util.Scanner;

public class pg2
{
public static void main()
{
    Scanner sc = new Scanner(System.in);
    
    System.out.println("Enter a number - ");
    int num = sc.nextInt();
    
    int out =0, m = 0;
    
    for (int i = 1; i<=num; i++)
    {
        out = (i*i)+1+m;
        System.out.println("  "+out);
        m++;
    }
}
}
