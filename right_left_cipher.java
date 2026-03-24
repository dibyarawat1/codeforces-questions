import java.util.*;
public class right_left_cipher {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        if(sc.hasNext()){
        String t = sc.next();
        int n = t.length();
        int left = 0;
        int right = n-1;
        int rem = n;
        StringBuilder result = new StringBuilder();
        while(left<=right){
            if(rem % 2 == 0){
                result.append(t.charAt(right));
                right--;
            }
            else{
                result.append(t.charAt(left));
                left++;
            }
            rem--;
        }
     System.out.println(result.reverse().toString());
        }
     sc.close();
    }
}

