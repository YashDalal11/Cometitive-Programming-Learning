import java.util.*;
public class problem1{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-->0){
            String s = sc.next();
            int cntb = 0;
            int cntac = 0;
            for(int i=0;i<s.length();i++){
                if(s.charAt(i)=='B'){
                    cntb++;
                }
                else{
                    cntac++;
                }
            }
            if(cntb==cntac){
                System.out.println("yes");
            }else{
                System.out.println("No");
            }
        }
    }
}