package java;
import java.util.Scanner ;
public class inter {
    public static void main (String arg[] ){
        int k = 0 , d = 0 , g = 0;
        float mn;
        System.out.print("Enter the no. of elements in array 1 : ");
        Scanner obj = new Scanner (System.in) ;
        int n = obj.nextInt();
        int a[]= new int[n];
        System.out.println("Enter the elements ");
        for ( int i =0 ; i < n ; i++){
            System.out.print("Enter element "+ (i+1) + " : ");
            a[i]=obj.nextInt();
        }

            // this is the second array 

        System.out.print("Enter the no. of elements in array 2 : ");
        int m = obj.nextInt();
        int b[]=new int[m];
        System.out.println("Enter the elements ");
        for ( int j =0 ; j < m ; j++){
            System.out.print("Enter element "+ (j+1) + " : ");
            b[j]=obj.nextInt();
        } 

            // 1 2 3 4 5 6    6+1/2 - 1= 2   a[2]= 3

            // 1 2 3 4 5 6 7 8      5+1/2 - 1 =    ((n+m+1)/2) - 1
        boolean which = true;
        while ( k < n && d < m && g != (((m+n+1)/2)-1) ){
            if( a[k] < b[d]){
                k++;
                g++;
                which= true;
            }else{
                d++;
                g++;
                which = false;
            }
        }
        

        if ( k > n){
            while( d < m &&  g != (((m+n+1)/2)-1)){
                d++;
                g++;
                which = false;
            }
        }else{
            while ( k < n &&  g != (((m+n+1)/2)-1)){
                k++;
                g++;
                which = true;
            }
        }
        System.out.println(g);

        if( n+m % 2 == 0){
            if(which == true){
                if ( a[k+1] < b[d]){
                     mn = (float)((a[k+1]+a[k])/2);
                }else{
                     mn = (float)((a[k+1]+b[d])/2);
                }
            }else{
                if ( a[k] > b[d++]){
                     mn = (float)((b[d]+b[d+1])/2);
                }else{
                     mn = (float)((b[d]+a[k])/2);
                }
            }
        }else{
            if(which == true){
                 mn = a[k];
            }else{
                 mn = b[d];
            }
        }
        System.out.println("The median is " + mn);
    }
    
}
