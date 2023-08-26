package java;
class A{
    int a;
    A(){
        a=10;
    }
    
}
class B extends A{
    
    int b;
    B(){
        super();
        b=20;
    }
    void print(){
        System.out.println(b);
    }
}
class C extends A{
    int c;
    C(){
        super();
        c=25;
    }
    void display(){
        System.out.println(a+"\n"+c);
    }
}
public class mul_inheritance {
    public static void main(String ar[]){
        C obj1=new C();
        B obj2=new B();
        obj1.display();
        obj2.print();
        System.out.println(obj1.a);
    }
}
