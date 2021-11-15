import java.util.Scanner;
public class multilication {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
            String s1 = sc.next();
            String s2 = sc.next();
            boolean negAns = false;
            StringBuilder ss1 = new StringBuilder(s1);
                StringBuilder ss2 = new StringBuilder(s2);
            if(s1.charAt(0)=='-' && s2.charAt(0)=='-'){
                ss1 = new StringBuilder(s1.substring(1));
                ss2 = new StringBuilder(s2.substring(1));
            }else if(s1.charAt(0)=='-'){
                ss1 = new StringBuilder(s1.substring(1));
                negAns=true;
            }else if(s2.charAt(0)=='-'){
                ss2 = new StringBuilder(s2.substring(1));
                negAns=true;
            }
            
            int n1 = ss1.length();
            int n2 = ss2.length();

            ss1.reverse();
            ss2.reverse();

            int res[] = new int[n1+n2];
            int index=0;
            for(int i =0;i<ss2.length();i++){
                int sc2 = ss2.charAt(i) -'0';
                int carry = 0;
                for(int j=0;j<ss1.length();j++){
                    index=i+j;
                    int sc1 = ss1.charAt(j) -'0';
                    int sum = (sc1*sc2)+carry+res[index];
                    carry = sum/10;
                    res[index] = sum%10;
                }
                if(carry!=0)
                    res[index+1] = carry;
            }
            int i=res.length-1;
            for(;i>=0;i--){
                if(res[i]!=0)
                    break;
            }
            StringBuilder ans =  new StringBuilder();
            for(;i>=0;i--){
                ans.append(res[i]);
            }
            if(ans.length()==0){
                System.out.println("0");
            }else{
                if(negAns){
                    System.out.println("-"+ans.toString());
                }else{
                    System.out.println(ans.toString());
                }
            }


    }
}
