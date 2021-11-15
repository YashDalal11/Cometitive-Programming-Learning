package sieve_of_eratosthenes;

import java.util.*;

public class SumOfAllPrimeNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int pri[] = new int[n + 1];
        int spf1[] = spf.smallPrimeFactor(n);
        for (int i = 2; i <= n; i++) {
            pri[i] = (spf1[i] == i) ? pri[i - 1] + i : pri[i - 1];
        }
        System.out.println(pri[n]);
        sc.close();
    }
}
