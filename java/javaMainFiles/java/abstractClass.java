package java;
import java.util.Scanner;
abstract class fig{
    int a,b;
    abstract void area();
    void read(){
        System.out.print("enter the length :");
        Scanner obj=new Scanner(System.in);
        int a=obj.nextInt();
        System.out.print("enter the width :");
        int b=obj.nextInt();
        
    }
    
}
class H extends fig{
    int Rarea;
    public void area(){
        int Rarea=super.a*super.b;
    }
    void print (){
        System.out.print("Area of rectangle is : "+Rarea);
    }
}

public class abstractClass {
    public static void main(String ar[]) {
        H object = new H();
        object.read();
        object.area();
        object.print();
   }
}
