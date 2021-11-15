import java.util.Scanner;

public class gcd {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n =sc.nextInt();
        int m =sc.nextInt();

        System.out.println(gcd(n,m));
    }
    static int gcd(int a,int b){
        if(a==0){
            return b;
        }
        int ans = gcd(b%a,a);
        return ans;
    }
}
