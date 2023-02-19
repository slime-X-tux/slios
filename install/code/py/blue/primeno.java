import java.util.Scanner;

public class primeno
{
public static void main()
{
    Scanner sc = new Scanner(System.in);
    
    System.out.println("Enter a number :");
    int x = sc.nextInt();
    
    int count=0;
    
    for (int i = 2; i<=x/2; i++)
    {
        if(x%i==0)
        {
            count++;
        }
    }
    
    if (count==0)
    {
        System.out.println("The number is a PRIME number");
    }
    
    else
    {
        System.out.println("The number is not a PRIME number");
    }
    
}
}
