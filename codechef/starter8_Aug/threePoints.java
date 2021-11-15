import java.util.Scanner;

public class threePoints {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int xa = sc.nextInt();
            int ya = sc.nextInt();
            int xb = sc.nextInt();
            int yb = sc.nextInt();
            int xc = sc.nextInt();
            int yc = sc.nextInt();
            if((xa==xb) && (yb==yc)){
                System.out.println("YES");
            }
            else if((ya==yb) && (xb==xc)){
                System.out.println("YES");
            }
            else{
                float ab = (float)(yb-ya) / (xb-xa);
                float bc = (float)(yc-yb) / (xc-xb);

                // System.out.println(ab+" "+bc+" "+(ab*bc));
                if((ab*bc)== -1 || ab==bc){
                    System.out.println("YES");
                }else{
                    System.out.println("NO");
                }

            }
        }
    }
}
