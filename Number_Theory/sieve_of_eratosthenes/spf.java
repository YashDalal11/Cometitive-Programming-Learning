package sieve_of_eratosthenes;

public class spf {
    public static int[] smallPrimeFactor(int n) {
        int spf1[] = new int[n + 1];
        for (int i = 2; i <= n; i++) {
            if (spf1[i] == 0) {
                spf1[i] = i;
                for (int j = i * i; j <= n; j += i) {
                    if (spf1[j] == 0) {
                        spf1[j] = i;
                    }
                }
            }
        }
        return spf1;
    }
// public static void main(String[] args) {
// Scanner sc = new Scanner(System.in);
// int n = sc.nextInt();

// int spf[] = new int[n+1];

// for(int i=2;i<=n;i++){
// if(spf[i]==0){
// spf[i] = i;
// for(int j=i*i;j<=n;j+=i){
// if(spf[j]==0){
// spf[j]=i;
// }
// }
// }
// }
// for(int i=2;i<=n;i++){
// System.out.println(i+" "+ spf[i]);
// }
// }
}
