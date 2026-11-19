package Contest_1;
 import java.util.*;
public class threePiles {
        public static void main(String[] args){
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t >0){
                int a = sc.nextInt();
                int b = sc.nextInt();
                int c = sc.nextInt();
                if((b-a) == (c-b) && (c-b) == 1 ){
                    System.out.println("YES");
                }else{
                    System.out.println("NO");
                }
                t--;
            }
            sc.close();
        }
    }

    

