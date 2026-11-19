package Contest_1;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class StubbornPen {
     public static void main(String[]args) throws IOException{
       BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        while(t >0){
            int n = Integer.parseInt(br.readLine().trim());
            String str = br.readLine().trim();
            int count = 0;
            if(str.charAt(0) != 'R'){
                count =1;
            }
            for(int i = 0  ; i< str.length()-1; i++){
                if(str.charAt(i) == str.charAt(i+1)){
                    count++;
                }
            }
            System.out.println(count);
            t--;
        }
    }
}
