import java.util.Scanner;

public class minimumCostPath{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n =sc.nextInt();
        int m =sc.nextInt();

        int a[][] = new int[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                a[i][j] = sc.nextInt();
            }
        }

        int dp[][] = new int[n][m];
        for(int i=dp.length-1;i>=0;i--){
            for(int j=dp[0].length-1;j>=0;j--){
                if(i==dp.length-1 && j==dp[0].length-1){
                    dp[i][j] = a[i][j];
                }
                else if(i==dp.length-1){
                    dp[i][j] = dp[i][j+1] + a[i][j];
                }
                else if(j==dp[0].length-1){
                    dp[i][j] = dp[i+1][j] + a[i][j];
                }
                else{
                    dp[i][j] = Math.min(dp[i+1][j] , dp[i][j+1] ) + a[i][j]; 
                }
            }
        }
        System.out.println(dp[0][0]);

    }
}
//sample input
// 7
// 7
// 2 8 4 1 6 4 2
// 6 0 9 5 3 8 5
// 1 4 3 4 0 6 5
// 6 4 7 2 4 6 1
// 1 0 3 7 1 2 7
// 1 5 3 2 3 0 9
// 2 2 5 1 9 8 2