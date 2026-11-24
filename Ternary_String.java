import java.util.*;
public class Ternary_String {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
       int t = sc.nextInt();
     
       while(t >0){
        String s = sc.next();
          int ans = Integer.MAX_VALUE;
         int i  =0;
         int j = 0;
         Map<Character,Integer> map = new HashMap<>();
           while(j < s.length()){
              char ch = s.charAt(j);
              if(!map.containsKey(ch)){
                map.put(ch,1);
           }else{
            map.put(ch,(map.get(ch))+1);
           }
           while(map.size() >=3 && i <=j){
            char ch2 = s.charAt(i);
            if(map.containsKey(ch2)){
                map.put(ch2,map.get(ch2)-1);
            }
                if(map.get(ch2)== 0){
                    map.remove(ch2);
                }
             
            ans = Math.min(ans,j-i+1);
            i++;
           }
           j++;
        }
        
        System.out.println(ans != Integer.MAX_VALUE ? ans : 0);
       }
       sc.close();
    }

}
