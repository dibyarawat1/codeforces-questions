import java.util.*;
public class A_String_rotation_game {
    static void solve(int n , String s){
        int count = 1;
        int score=0;
        for(int i = 1; i< n ; i++){
            if(s.charAt(i-1)==s.charAt(i)){
              score++ ;
            }
            else{
                count++;
            }
        }
       if(s.charAt(0)== s.charAt(n-1)|| score==0){
          System.out.println(count);
                   }
                   else{
                       if(score>0){
                       System.out.println(count+1);
                   }
                   }
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t>0){
                int n = sc.nextInt();
                String s = sc.next();
              solve(n , s);
                t--;
        }
        sc.close();
    }
    }
