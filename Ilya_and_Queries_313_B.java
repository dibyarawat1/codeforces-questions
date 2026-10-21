import java.util.*;
import java.io.*;

public class Ilya_and_Queries_313_B {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
           String str = br.readLine();
           int[]arr = new int[str.length()];
           for(int i = 1 ; i< str.length(); i++){
            int match = (str.charAt(i) == str.charAt(i-1))?1:0;
              arr[i] = arr[i-1]+ match;
           }
           int m = Integer.parseInt(br.readLine());
           StringBuilder sb = new StringBuilder();
           for(int i = 0; i< m; i++){
             StringTokenizer st = new StringTokenizer(br.readLine());
             int l = Integer.parseInt(st.nextToken());
             int r = Integer.parseInt(st.nextToken());
             int ans = arr[r-1]-arr[l-1];
             sb.append(ans).append("\n");
           }
          System.out.println(sb.toString());
    }
}
