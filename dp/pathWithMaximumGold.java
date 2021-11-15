import java.util.Scanner;

public class pathWithMaximumGold{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();

        int a[][] = new int[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                a[i][j] = sc.nextInt();
            }
        }
        int dp[][] = new int[n][m];
        for(int j = dp[0].length-1;j>=0;j--){
            for(int i=dp.length-1;i>=0;i--){
                if(j==dp[0].length-1){
                    dp[i][j] = a[i][j];
                }
                else if(i==0){
                    dp[i][j] = Math.max(dp[i][j+1], dp[i+1][j+1]) + a[i][j];
                }
                else if(i==dp.length-1){
                    dp[i][j] = Math.max(dp[i-1][j+1], dp[i][j+1]) + a[i][j];
                }
                else{
                    dp[i][j] = Math.max( Math.max(dp[i-1][j+1], dp[i][j+1]) , dp[i+1][j+1]) + a[i][j];
                }
            }
        }

        int max =dp[0][0];
        for(int i = 1;i<dp.length;i++){
            if(max<dp[i][0])
                max = dp[i][0];
        }
        System.out.println(max);
    }
}
// sample input
// 6 6
// 0 1 4 2 8 2
// 4 3 6 5 0 4
// 1 2 4 1 4 6
// 2 0 7 3 2 2
// 3 1 5 9 2 4
// 2 7 0 8 5 1
