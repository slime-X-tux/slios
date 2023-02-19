import java.util.Scanner;

public class perfectno
{
public static void main()
{
    Scanner sc = new Scanner(System.in);
    
    System.out.println("Enter a number :");
    int x = sc.nextInt();
    
    int m = 0;
    
    for (int f=1; f<=x/2; f++)
    {
        if (x%f==0)
        {
            m+= f;
        }
    }
    
    if (x==m)
    {
      System.out.println("The number IS an PERFECT number");  
    }
    
    else
    {
        System.out.println("The number is NOT an PERFECT number");
    }
    
}
}
