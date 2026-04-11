import java.util.*;
public class yes_or_yes_2178A {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0){
            int count = 0;
            String str = sc.next();
           for(char c : str.toCharArray()){
               if(c == 'Y'){
                   count++;
               }
           }
           if(count >1){
               System.out.println("No");
           }else{
               System.out.println("yES");
           }
           t--;
        }
        sc.close();
    }
}
