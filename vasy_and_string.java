import java.util.*;
public class vasy_and_string {
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);
        int  n = sc.nextInt();
        int k = sc.nextInt();
        String str = sc.next();
        int flip_a = flip(str,k, 'a');
        int flip_b=  flip(str,k, 'b');
        int ans = Math.max(flip_a, flip_b);
        System.out.println(ans);
        
    }
    static int  flip(String str,int k, char ch){
        int start =0, ans =0, flip = 0;
        for(int i = 0 ; i< str.length(); i++){
            if(str.charAt(i) != ch ){
                flip++;
            }
            while(flip > k && start <= i){
                if(str.charAt(start) != ch){
                    flip--;
                }
                start++;
            }
            
            ans = Math.max(ans, i-start+1);
        }
        return ans;
    }
}

