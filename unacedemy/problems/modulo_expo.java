import java.util.Scanner;

public class modulo_expo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        int n = (2 * k) - 2;

        long corner = 2 * 3 * pw(4, n - k);
        long middle = pw(3, 2) * pw(4, n - k - 1) * (n - k - 1);
        long ans = corner + middle;
        System.out.println(ans);
    }

    public static int pw(int a, int n) {
        long ans = 1;
        a %= a;
        while (n > 1) {
            if (n % 2 == 1) {
                ans *= a;
            }
            a *= a;
            n = n >> 1;
        }
        return (int) ans % 1000000007;
    }
}