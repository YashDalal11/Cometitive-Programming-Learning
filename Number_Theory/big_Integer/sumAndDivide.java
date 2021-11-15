import java.util.ArrayList;
import java.util.Scanner;

public class sumAndDivide{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc .nextInt();
        while(t-->0){
            String s1 = sc.next();
            String s2 = sc.next();

            ArrayList<Integer> addition = add(s1,s2);
            ArrayList<Integer> divide = divideBy2(addition);
            for(int v : addition){
                System.out.print(v);
            }
            System.out.println();
            for(int v : divide){
                System.out.print(v);
            }
            System.out.println();
            
            
        }
    }
    public static ArrayList<Integer> removeZeros(ArrayList<Integer> a){
        for(int i =a.size()-1;i>=0;i--){
            if(a.get(i)!=0){
                break;
            }
            else{
                a.remove(i);
            }
        }
        return a;
    }
    public static ArrayList<Integer> divideBy2(ArrayList<Integer> a){
        ArrayList<Integer> d = new ArrayList<>();
        int carry=0;
        for(int i=0;i<a.size();i++){
            int num =carry*10+a.get(i);
            carry=num%2;
            d.add(num/2);
        }
        ArrayList<Integer> ans = removeZeros(d);
        return ans;
    }

    public static ArrayList<Integer> add(String s1,String s2){
        ArrayList<Integer> a1 = new ArrayList<>();
        ArrayList<Integer> a2 = new ArrayList<>();

        for(int i=s1.length()-1;i>=0;i--){
            a1.add(s1.charAt(i)-'0');
        }

        for(int i=s2.length()-1;i>=0;i--){
            a2.add(s2.charAt(i)-'0');
        }

        int len = Math.min(a1.size(), a2.size());
        int carry=0;
        ArrayList<Integer> a = new ArrayList<>();
        for(int i=0;i<len;i++){
            int num = a1.get(i) + a2.get(i) + carry;
            carry = num/10;
            a.add(num%10);
        }

        if(a1.size()>len){
            while(a1.size()>len){
                int num = a1.get(len) + carry;
                carry = num/10;
                a.add(num%10);
                len++;
            }
        }
        if(a2.size()>len){
            while(a2.size()>len){
                int num = a2.get(len) + carry;
                carry = num/10;
                a.add(num%10);
                len++;
            }
        }
        if(carry!=0){
            a.add(carry);
        }
        ArrayList<Integer> ans = removeZeros(a);

        for(int i=0;i<ans.size()/2;i++){
            int t = ans.get(i);
            ans.set(i,ans.get(ans.size()-1-i));
            ans.set(ans.size()-1-i,t);
        }
        if(ans.size()==0)
            ans.add(0);
        return ans;
    }
}