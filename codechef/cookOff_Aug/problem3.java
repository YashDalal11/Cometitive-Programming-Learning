import java.util.HashMap;
import java.util.Scanner;
public class problem3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int a[] = new int[n];
            HashMap<Integer,Integer> h = new HashMap<>();
            for(int i=0;i<n;i++){
                a[i] = sc.nextInt();
                if(h.containsKey(a[i])){
                    h.replace(a[i],h.get(a[i])+1);
                }else{
                    h.put(a[i],1);
                }
            }
            int max = 0;
            for(int i=0;i<n;i++){
                if(h.get(a[i])>max){
                    
                    max=h.get(a[i]);
                }
            }
            if(n<=2){
                System.out.println(0);
                continue;
            }
            if(max==1){
                System.out.println(n-2);
                continue;
            }
            System.out.println(n-max);

        }
    }
}
