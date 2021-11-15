import java.util.ArrayList;
import java.util.Scanner;

public class sum{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-->0){
            String s1 = sc.next();
            String s2 = sc.next();

            ArrayList<Integer> a1 = new ArrayList<>();
            ArrayList<Integer> a2 = new ArrayList<>();

            for(int i=s1.length()-1;i>=0;i--){
                a1.add(s1.charAt(i)-'0');
            }

            for(int i=s2.length()-1;i>=0;i--){
                a2.add(s2.charAt(i)-'0');
            } 
            int len = Math.min(a1.size(),a2.size());
            int carry = 0;
            ArrayList<Integer> ans = new ArrayList<>();
            for(int i=0;i<len;i++){
                int num = a1.get(i)+a2.get(i)+carry;
                carry = num/10;
                ans.add(num%10);
            }
            if(a1.size()>len){
                while(a1.size()>len){
                    int num=a1.get(len)+carry;
                    carry=num/10;
                    ans.add(num%10);
                    len++;

                }
            }
            if(a2.size()>len){
                while(a2.size()>len){
                    int num=a2.get(len)+carry;
                    carry=num/10;
                    ans.add(num%10);
                    len++;
                }
            }

            while(carry!=0){
                ans.add(carry%10);
                carry/=10;
            }
            for(int i=ans.size()-1;i>=0;i--){
                if(ans.get(i)!=0){
                    break;
                }    
                else{
                    ans.remove(i);
                }
            }
            for(int i=0;i<ans.size()/2;i++){
                int a = ans.get(i);
                int b = ans.get(ans.size()-1-i);
                ans.set(i,ans.get(i)^ans.get(ans.size()-1-i));
                ans.set(ans.size()-1-i,ans.get(i)^ans.get(ans.size()-1-i));
                ans.set(i,ans.get(i)^ans.get(ans.size()-1-i));
            }
            
            for(int v : ans){
                System.out.print(v);
            }
            if(ans.size()==0)
            System.out.print(0);
            System.out.println();



        }
    }
}