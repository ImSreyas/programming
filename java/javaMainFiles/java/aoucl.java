package java;
class aoucl{
    public static void main(String arg[]){
        int a,b,r;
        a=Integer.parseInt(arg[0]);
        b=Integer.parseInt(arg[2]);
        switch(arg[1]){
            case "+":r=a+b;System.out.println(a+"+"+b+"="+r);
            break;
            case "-":r=a-b;System.out.println(a+"-"+b+"="+r);
            break;
            case "*":r=a*b;System.out.println(a+"*"+b+"="+r);
            break;
            case "/":r=a/b;System.out.println(a+"/"+b+"="+r);
            break;
            default:System.out.println("Enter a valid expression : ");

        }
        
    }
    }