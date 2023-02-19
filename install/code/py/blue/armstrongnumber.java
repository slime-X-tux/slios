import java.util.*;

public class armstrongnumber{
    public static void main(){
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enetr a number: ");
        int b = sc.nextInt();
        
        // 371 - 27+343+1 b=0 sum =344+27=371   
        
        int bn =b; 
        int sum =0;
        int num =0;
        
        while(b>0){
          num = b%10;
          sum = sum + num*num*num;
          b = b/10;
        }
        
        if(bn==sum){
            System.out.println("The number is an Armstrong number");
        }
        else{
            System.out.println("The number is not an Armstrong number");
        }
    }
}


// 145 - 120+24+1