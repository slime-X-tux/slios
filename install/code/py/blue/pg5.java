public class pg5
{
public static void main()
{
    double out =0;
    double m = 1;
    
    for (int i = 1; i<=19; i++)
    {
        m++;
        out += (i/m);
    }
    System.out.println("  "+out);
}
}
