import java.util.Scanner;

public class pg4
{
public static void main()
{
    Scanner sc = new Scanner(System.in);
    
    System.out.println("Enter a number :");
    double x = sc.nextDouble();
    
    
    double out =0;
    
    for (int i = 1; i<=19; i+=2)
    {
        out += (x/i);
    }
    System.out.println("  "+out);
}
}
