package sieve_of_eratosthenes;

import java.util.*;

public class primeFactorWithSieve {
    public static HashMap<Integer,Integer> PFWC(int n){

        int[] spf1 = spf.smallPrimeFactor(n);
        HashMap<Integer, Integer> h = new HashMap<>();
        while (n > 1) {
            int p = spf1[n];
            int count = 0;
            while (n % p == 0) {
                n /= p;
                count++;
            }
            h.put(p, count);
        }
        // for (Map.Entry<Integer, Integer> entry : h.entrySet()) {
        //     System.out.println(entry.getKey() + " => " + entry.getValue());
        // }
        return h;
    }
    
}
