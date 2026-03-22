import java.util.*;
public class sieve_of_eaco67thenes{
    static boolean solve(int n , Scanner sc ){
        boolean found_67 = false;
        while(n>0){
            int a = sc.nextInt();
            if(a==67){
                found_67 = true;
            }
            n--;
        }
       return found_67;
    }
    public static void main(String[] args){
        Scanner sc =new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0){
            int  n = sc.nextInt();
            if(solve(n , sc)){
                System.out.println("yes");
            }
            else{
                System.out.println("no");
            }
            t--;
        }
        sc.close();
    }
}