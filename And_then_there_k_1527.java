import java.util.*;
public class And_then_there_k_1527 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0){
            int n = sc.nextInt();
            int temp = n;
            int msb = 0;
            while(temp > 1){
                temp = temp>>1;
                msb++;
            }
            int result = (1<<msb)-1;
            System.out.println(result);
            t--;
        }
        sc.close();
    }
}
