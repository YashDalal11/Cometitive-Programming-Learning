package sieve_of_eratosthenes;

import java.util.*;
public class primeFactorWithoutSieve{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        HashMap<Integer,Integer> h = new HashMap<>();

        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                int p = 0;
                while(n%i==0){
                    n/=i;
                    p++;
                }
                h.put(i, p);
            }
        }
        if(n>1){
            h.put(n,1);
        }
        for( Map.Entry<Integer, Integer> entry : h.entrySet() ){
            System.out.println( entry.getKey() + " => " + entry.getValue() );
        }
        sc.close();
    }
}