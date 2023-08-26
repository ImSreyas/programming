package java;
import java.util.Scanner;
class ReadFromUser
{
    public static void main(String args[]){
        int i=0,max,product=1,sum=0,even=0,odd=0;
        System.out.print("Enter the no.of elements : ");
        Scanner sca= new Scanner(System.in);
        int a= sca.nextInt();
        int b[]=new int[25];
        for(i=0;i<a;i++){
            System.out.print("Enter the element : ");
            b[i]=sca.nextInt();
        }
        max=b[0];
        for(i=0;i<a;i++){
            if(max<b[i])max=b[i];
        }
        System.out.println("Largest number is : "+max);

        
         for(i=1;i<=a;i++){
            sum=sum+i;
            product=product*i;
            if(i%2==0)even=even+i;
            else odd=odd+i;
        }
        System.out.println("\nSum of even numbers is : "+even);
        System.out.println("Sum of odd numbers is : "+odd);
        System.out.println("Total of numbers is : "+sum);  
        System.out.println("factorial of numbers is : "+product);
        
    }
}

