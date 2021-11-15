import java.util.ArrayList;

public class factorialByArrayList {
    
    public static void main(String[] args) {
        ArrayList<Integer> res = factorial(100);
        for(int v:res){
            System.out.print(v);
        }
        System.out.println();
    }
    static ArrayList<Integer> factorial(int n){
        ArrayList<Integer> res = new ArrayList<>();
        res.add(1);
        for(int i=2;i<=n;i++)
            multiple(i,res);
            
        for(int i=0;i<=res.size()/2;i++){
            int temp= res.get(i);
            res.set(i,res.get(res.size()-1-i));
            res.set(res.size()-1-i,temp);
        }
        return res;
    }
    
    static void multiple(int x,ArrayList<Integer> res){
        int carry=0;
        
        for(int i=0;i<res.size();i++){
            int sum=(res.get(i)*x)+carry;
            carry=sum/10;
            res.set(i,sum%10);
        }
        while(carry!=0){
            res.add(carry%10);
            carry=carry/10;
        }
        
    }
}
