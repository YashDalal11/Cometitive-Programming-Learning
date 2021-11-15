import java.util.Scanner;

public class ArrangeBuilding {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        long oldBuild = 1,oldSpace = 1;
        for(int i=2;i<=n;i++){
            long newBuild = oldSpace;
            long newSpace = oldSpace+oldBuild;

            oldSpace = newSpace;
            oldBuild = newBuild;
        }

        long total = oldBuild+oldSpace;
        System.out.println(total*total);
    }
}
