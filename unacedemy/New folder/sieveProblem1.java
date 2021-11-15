import java.util.*;

public class sieveProblem1 {
    public static void main(String[] args) {
        boolean isPrime[] = new boolean[100002];
        Arrays.fill(isPrime, true);
        isPrime[1] = false;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if (n > 2) {
            System.out.println(2);
        } else {
            System.out.println(1);
        }

        for (int i = 2; i <= n + 1; i++) {
            if (isPrime[i] == true) {
                System.out.print(1 + " ");
                for (int j = i * i; j <= n + 1; j += i) {
                    isPrime[j] = false;
                }
            } else {
                System.out.println(2 + " ");
            }
        }

    }
}