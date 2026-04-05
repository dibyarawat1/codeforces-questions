import java.util.*;
public class 202A_LLP{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        if(!sc.hasNext()){
            return ;
        }
        String str   = sc.next();
        char maxChar = 'a';
        int count = 0;
        StringBuilder result = new StringBuilder();
        for(int i = 0 ; i < str.length() ; i++){
            char current = str.charAt(i);
            if(current > maxChar){
                maxChar = str.charAt(i);
                count = 1;
            }
            else if(maxChar == current){
                count++;
            }
        }
        for(int i  = 0 ; i< count ; i++){
            result.append(maxChar);
        }
        System.out.println(result.toString());
        sc.close();
    }
}