import java.util.*;

public class problem2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int s = sc.nextInt();

            int f = s - n;
            f = f < 0 ? 0 : f;
            int sec = s - f;
            int diff = sec - f;
            System.out.println(diff);
        }
    }
}