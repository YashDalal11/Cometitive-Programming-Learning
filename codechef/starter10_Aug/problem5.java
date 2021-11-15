import java.util.ArrayList;
import java.util.Scanner;

public class problem5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n =  sc.nextInt();
            int a[] = new int[n];
            int f=0;
            for(int i=0;i<n;i++){
                a[i] =sc.nextInt();
                if(i>0 && a[i]>a[0]){
                    f=1;
                }
            }
            if(f==1){
                System.out.println(-1);
            }
            else if(n==1){
                System.out.println(0);
            }
            else{
                int max = a[n-1];
                ArrayList<Integer> arr = new ArrayList<>();
                for(int i=n-2;i>=0;i--){
                    if(max<a[i]){
                        max=a[i];
                        arr.add(max);
                    }
                }
                
            }

            // if(n==1){
            //     System.out.println(1);
            //     continue;
            // }
            // ArrayList<Integer> arr = new ArrayList<>();
            // int max=a[n-1];
            // for(int i=n-2;i>=0;i--){
            //     if(a[i]>max){
            //         arr.add(a[i]);
            //         max=a[i];
            //     }
            // }
            // if(arr.get(arr.size()-1)!=a[0]){
            //     System.out.println(-1);
            // }
            // else{
            //     System.out.println(arr.size());
            // }
            

        }
    }
}
