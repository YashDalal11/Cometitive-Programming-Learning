package sieve_of_eratosthenes;

import java.util.*;

public class ProductOfFactors {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int fact = NoOfFactors.noFact(n);
        int ans = (int) Math.pow(n, (double) fact / 2);
        System.out.println(ans);
    }
}
