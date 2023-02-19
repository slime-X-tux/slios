import java.util.*;

public class krishnamurti{
    public static void main(){
        Scanner sc = new Scanner(System.in);
        
        // b =145  bn = 
        
        System.out.println("Enter a number : ");
        int b = sc.nextInt();
        
        int bn = b;
        int c =0;
        int m =1;
        int sum = 0;
        
        while(bn>0){
            c = bn%10;
            for(int i = 1; i<=c; i++){
                m = m*i;
            }
            sum = sum+m;
            bn = bn / 10;
            m =1;
        }
        
        if(b==sum){
            System.out.println("The number is an Krishnamurti number");
        }
        else{
            System.out.println("The number is not an Krishnamurti number");
        }
    }
}