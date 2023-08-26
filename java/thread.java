class th implements Runnable{
    public void run(){
        for(int i = 1; i < 10; i++){
            System.out.println('1');
        }
    }
}
class th2 implements Runnable{
    public void run(){
        for(int i = 0; i < 10; i++){
            System.out.println('2');
        }
    }
}

public class thread {
    public static void main(String a[]){
        th2 t2 = new th2();
        th t = new th();
        Thread tr = new Thread(t);
        Thread tr2 = new Thread(t2);
        tr.start();
        tr2.start();
    }
}
