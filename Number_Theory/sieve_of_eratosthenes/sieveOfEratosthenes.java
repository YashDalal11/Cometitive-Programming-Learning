package sieve_of_eratosthenes;
import java.util.*;

public class sieveOfEratosthenes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        boolean isPrime[] = new boolean[n + 1];
        for (int i = 3; i < n; i += 2) {
            isPrime[i] = true;
        }

        for (int i = 3; i * i <= n; i += 2) {
            if (isPrime[i] == true) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        isPrime[2] = true;
        for (int i = 0; i < isPrime.length; i++) {
            if (isPrime[i] == true) {
                System.out.print(i + " ");
            }
        }
        sc.close();
    }
}