import java.util.Scanner;

public class penalty_shot{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc .nextInt();
        while(t-->0){
            int countOdd = 0, countEven=0; 
            for(int i=1;i<=10;i++){
                int v = sc.nextInt();
                if(i%2==0){
                    if(v==1){
                        countEven++;
                    }
                    
                }
                else{
                    if(v==1){
                        countOdd++;
                    }
                    
                }
            }
            int ans = countEven==countOdd? 0:(countEven<countOdd? 1:2);
            System.out.println(ans);
        }
    }
}