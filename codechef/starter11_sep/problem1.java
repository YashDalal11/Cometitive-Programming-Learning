import java.util.*;

public class problem1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int dir = n % 4;
            if (dir == 1) {
                System.out.println("East");
            } else if (dir == 2) {
                System.out.println("South");
            } else if (dir == 3) {
                System.out.println("West");
            } else if (dir == 0) {
                System.out.println("North");
            }
        }
    }
}