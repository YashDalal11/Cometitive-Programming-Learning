import java.util.Scanner;

public class problem2{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            sc.nextLine();
            String s1 = sc.nextLine();   
            String s2 = sc.nextLine();
            int s1Count=0,s2Count=0;
            for(int i=0;i<n;i++){
                if(s1.charAt(i)=='1'){
                    s1Count++;
                }
                if(s2.charAt(i)=='1'){
                    s2Count++;
                }
            }
            int min = s1Count<s2Count?s1Count:s2Count;
            if(min>(n/2)){
                System.out.println(n/2);
            }else{
                System.out.println(min);
            }
        }
    }
}