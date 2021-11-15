import java.util.*;

public class problem3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            long s = sc.nextLong();
            long h = 0;
            long sum = 0;
            if(n%2==0){
                h=n/2;
                sum=h*(n+1);
            }else{
                h=(n+1)/2;
                sum = h*n;
            }
            
            long ans = sum - s;
            ans = ans <= 0 ? -1 : ans;
            if(ans>n){
                ans=-1;
            }
            System.out.println(ans);
        }
    }
}