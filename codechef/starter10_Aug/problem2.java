import java.util.Scanner;
public class problem2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int ans=0;
            int n = sc.nextInt();
            int sum = (n*(n+1))/2;
            if(sum%2==0){
                System.out.println(n);
            }
            else{
                System.out.println(n-1);
            }
        }
    }
}
