import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.Scanner;

public class problem6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int k = sc.nextInt();
            int x = sc.nextInt();
            ArrayList<Long> a = new ArrayList<>();
            for(int i=0;i<n;i++){
                a.add(sc.nextLong());
            }
            Collections.sort(a);
            long sum=0;
            while(k>0 && a.size()>1){
                Long v = a.get(a.size()-1) + a.get(a.size()-2);
                if(v>=x){
                    sum+=x;
                    k--;
                    a.remove(a.size()-1);
                    a.remove(a.size()-1);
                }
                else{
                    break;
                }
            }
            for(int i=0;i<a.size();i++){
                sum+=a.get(i);
            }
            System.out.println(sum);
        }
    }
}
