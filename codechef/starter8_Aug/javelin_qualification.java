import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Scanner;

public class javelin_qualification {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n= sc.nextInt();
            int m= sc.nextInt();
            int x= sc.nextInt();

            int a[] = new int[n];
            ArrayList<Integer> ans = new ArrayList<>();
            HashMap<Integer,Integer> h = new HashMap<>();
            for(int i=0;i<n;i++){
                int v = sc.nextInt();
                if(v>=m){
                    ans.add(i+1);
                }
                else{
                    a[i]=v;
                    h.put(v,i+1);
                }
            }
            int size = ans.size();
            if(ans.size()<x){
                Arrays.sort(a);
                for(int i=1;i<=x-size;i++){
                    ans.add(h.get(a[a.length-i]));
                }
            }
            System.out.print(ans.size()+" ");
            Collections.sort(ans);
            for(int v:ans){
                System.out.print(v+" ");
            }
            System.out.println();
        }
    }
}
