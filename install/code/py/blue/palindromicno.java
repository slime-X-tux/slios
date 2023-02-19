import java.util.Scanner;

public class palindromicno
{
public static void main()
{
    Scanner sc = new Scanner(System.in);
    
    System.out.println("Enter a number :");
    int x = sc.nextInt();
    
    int ognum = x;
    int reverse = 0;
    int hold = 0;
    int count = 0;
    int m =x;
    
    while(x>0)
    {
        hold = x%10;
        sum =sum + (hold*hold*hold);
        x /= 10;
    }
    
    if (ognum==reverse)
    {
        System.out.println("The number is a PALINDROMIC number");
    }
      
    else 
    {
        System.out.println("The number is NOT a PALINDROMIC number");
    }
    
}
}
