import java.util.Scanner;

public class unboundedKnapSack {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int val[] = new int[n];
        int wts[] = new int[n];

        for(int i=0;i<n;i++){
            val[i] = sc.nextInt();
        }

        for(int i=0;i<n;i++){
            wts[i] = sc.nextInt();
        }

        int cap = sc.nextInt();

        int dp[] = new int[cap+1];

        // By coin change permutation method 

        // for(int i=1;i<dp.length;i++){
        //     int max = 0;
        //     for(int j=0;j<wts.length;j++){
        //         if(i>=wts[j]){
        //             int v = dp[i-wts[j]] + val[j];
        //             max= Math.max(max,v);
        //         }
        //     }
        //     dp[i]=max;
        // }

        // By coin change combination;

        for(int j=0;j<wts.length;j++){
            for(int i=1;i<dp.length;i++){
                int max = dp[i];
                if(i>=wts[j]){
                    int v = dp[i-wts[j]] + val[j];
                    max = Math.max(max,v);
                }
                dp[i] = max;
            }
        }

        for(int v: dp){
            System.out.print(v+" ");
        }

        System.out.println("\n"+dp[cap]);
    }
}

