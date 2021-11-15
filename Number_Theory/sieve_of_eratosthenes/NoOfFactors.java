package sieve_of_eratosthenes;

import java.util.*;

public class NoOfFactors {
    public static int noFact(int n){
        HashMap<Integer,Integer> p = primeFactorWithSieve.PFWC(n);
        int ans =1;
        for (Map.Entry<Integer, Integer> entry : p.entrySet()) {
            ans *= (entry.getValue()+1);
        }
        return ans;
    }
}
