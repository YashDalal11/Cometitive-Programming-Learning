import java.util.*;

public class problem4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            if (n % 2 == 0) {
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        System.out.print("-1 ");
                    }
                    System.out.println();
                }
            } else {
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        if (i == j) {
                            System.out.print(1 + " ");
                        } else {
                            System.out.print(-1 + " ");
                        }
                    }
                    System.out.println();
                }
            }
        }
    }
}