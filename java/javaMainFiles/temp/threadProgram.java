class threadTest implements Runnable{
    public void run(){
        //second loop
        for(int i=0;i<=5;i++){
            System.out.println(i);
        }
    }
}
public class threadProgram {
    public static void main(String [] a){
    threadProgram obj = new threadProgram();
    Thread two = new Thread(obj);
    two.start();
    // first program 
    for(int i=1;i<=5;i++){
        System.out.println(i);
    }
}
}
