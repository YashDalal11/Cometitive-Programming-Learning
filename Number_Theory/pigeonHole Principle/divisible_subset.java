import java.util.Scanner;

public class divisible_subset{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int a[] = new int[n];
            int sum=0;
            int dp[] = new int[n];
            boolean found = false;
            int left=-1,right=-1;
            for(int i=0;i<n;i++){
                a[i] = sc.nextInt();
                sum =(sum+a[i])%n;
                if(!found){
                    if(sum==0){
                        left = 1;
                        right = i+1;
                        found=true;
                    }
                    else{
                        if(dp[sum]!=0){
                            left = dp[sum]+1;
                            right= i+1;
                            found=true;
                        }
                        dp[sum] = i+1;
                    }
                }
            }
            System.out.println(right-left+1+"\n");
            for(int i=left;i<=right;i++){
                System.out.print(i+" ");
            }
            System.out.println();
        }
    }
}