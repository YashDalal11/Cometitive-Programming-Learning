package sieve_of_eratosthenes;

import java.util.*;

public class SumOfFactors {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        HashMap<Integer, Integer> p = primeFactorWithSieve.PFWC(n);
        long ans = 1;
        for (Map.Entry<Integer, Integer> entry : p.entrySet()) {
            ans *= ((Math.pow(entry.getKey(), entry.getValue() + 1) - 1) / (entry.getKey() - 1));
        }
        System.out.println(ans);
        sc.close();
    }
}
