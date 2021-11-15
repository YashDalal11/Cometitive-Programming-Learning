import java.util.ArrayList;
import java.util.Scanner;
public class problem5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            ArrayList<Integer> a = new ArrayList<>();
            for(int i=0;i<n;i++){
                a.add(sc.nextInt());
            }
            boolean flag = false;
            for(int i=0;i<n;i++){
                int mul=a.get(i);
                for(int j=i;j<n;j++){
                    int v = a.get(i)*a.get(j);
                    if(a.contains(mul)){

                    }
                }
            }
        }
    }
}
