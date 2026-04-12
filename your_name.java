import java.util.*;
public class your_name {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0){
             int[] freq = new int[26];
            int  n = sc.nextInt();
            String s = sc.next();
            String str = sc.next();
            for(int i = 0  ; i< n ; i++){
                freq[str.charAt(i) - 'a']++;
                freq[s.charAt(i) - 'a']--;
            }
            boolean y = true;
            for(int i = 0 ; i< 26 ; i++){
                if(freq[i] !=0){
                   y = false;
                   break;
                }
               
            } 
            if(y == true){
             System.out.println("Yes");
            }
            else{
                 System.out.println("no");
            }
            t--;
        }
        sc.close();
    }
}