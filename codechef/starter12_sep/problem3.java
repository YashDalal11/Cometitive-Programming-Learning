import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.Scanner;

public class problem3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();
            int x = sc.nextInt();
            int y = sc.nextInt();
            int z = sc.nextInt();
            
            int ans=0;

            for(int i=0;i<=20;i++){
                for(int j=0;j<=20;j++){
                    for(int k=0;k<=20;k++){
                        int time = (i*a)+(j*b)+(k*c);
                        if(time<=240){
                            ans = Math.max(ans, (i*x)+(j*y)+(k*z) );
                        }
                    }
                }
            }
            System.out.println(ans);
        }
    }
}