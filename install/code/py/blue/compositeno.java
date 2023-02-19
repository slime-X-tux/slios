import java.util.Scanner;

public class compositeno
{
public static void main()
{
    Scanner sc = new Scanner(System.in);
    
    System.out.println("Enter a number :");
    int x = sc.nextInt();
    
    int count = 0;
    
    for (int f=2; f<=x/2; f++)
    {
        if (x%f==0)
        {
            count++;
            break;
        }
    }
    
    if (count==1)
    {
      System.out.println("The number IS an COMPOSITE number");  
    }
    
    else
    {
        System.out.println("The number is NOT an COMPOSITE number");
    }
    
}
}
