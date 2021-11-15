import java.util.Scanner;

public class problem4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            int x = sc.nextInt();
            int y = sc.nextInt();
            
            if(n>m) {
                int temp = m;
                m=n;
                n=temp;
            }
            int diff = m-n;

            long case1 = (n+m-2)*x;
            long case2 = ((n-1)*y)+(diff*x);
            long case3 = ((n-1)*y)+((diff/2)*2*y)+ (diff%2)*x;

            long ans = Math.min(Math.min(case1,case2),case3);
            System.out.println(ans);
        }
    }
}