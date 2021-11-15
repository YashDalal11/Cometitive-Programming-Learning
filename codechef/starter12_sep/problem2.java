import java.util.Scanner;

public class problem2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            if(n==1){
                System.out.println(3);
                continue;
            }
            StringBuffer s =new StringBuffer(); 
            s.append(1);
            while(n-2>0){
                s.append(0);
                n--;
            }
            s.append(5);
            System.out.println(s);
        }
    }
}