package java;
import java.util.Scanner;
class A{
    int r;
    A(int x,int y,int z){
        if(z==4){
        r=x/y;
        System.out.println("Divide is = "+r);
        }
    }

}
class B extends A{
    int r;
    B(int x,int y,int z){
        super(x,y,z);
        if(z==3){
            r=x*y;
            System.out.println("Product is = "+r);   
        }
    }
}
class C extends B{
    int r;
    C(int x,int y,int z){
        super(x,y,z);
        if(z==2){
            r=x-y;
            System.out.println("Sub is = "+r);
        }
    }
}
class D extends C{
    int r;
    D(int x,int y,int z){
        super(x,y,z);
        if(z==1){
            r=x+y;
            System.out.println("Sum is = "+r);
        }
    }
}
class mulInheritance {
    public static void main(String ar[]){
    Scanner scanObj=new Scanner(System.in);
    System.out.println("Enter two numbers : ");
    int a=scanObj.nextInt();
    int b=scanObj.nextInt();
    System.out.println("Choices : ");
    System.out.print("1.Addition\n2.Substraction\n3.Multiplication\n4.Divition\nEnter your choice: ");
    int c=scanObj.nextInt();
    D obj=new D(a,b,c);
    }
}



