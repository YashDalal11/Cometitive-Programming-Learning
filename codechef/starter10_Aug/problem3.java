import java.util.Scanner;

public class problem3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int k = sc.nextInt();
            int a[] = new int[n];
            int max=Integer.MIN_VALUE;;
            for(int i=0;i<n;i++){
                a[i]=sc.nextInt();
                max= Math.max(a[i],max);
            }
            int ans=0;
            for(int i=k-1;i<n;i++){
                if(a[i]==max){
                    ans +=(n-i);
                }
            }
            System.out.println(ans);
        }
    }
}
