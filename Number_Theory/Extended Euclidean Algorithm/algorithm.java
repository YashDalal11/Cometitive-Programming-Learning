import java.util.Scanner;

public class algorithm{
    static class triplet{
        int x;
        int y;
        int gcd;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();

        triplet ans = gcd(n,m);
        System.out.println(ans.x+" "+ans.y+" "+ans.gcd);

    }
    // static triplet gcd(int a,int b){
    //     if(a==0){
    //         triplet ans = new triplet();
    //         ans.x = 0;
    //         ans.y = 1;
    //         ans.gcd = b;
    //         return ans;
    //     }

    //     triplet nans = gcd(b%a,a);
    //     triplet ans = new triplet();
    //     ans.x= nans.y-(b/a)*nans.x;
    //     ans.y= nans.x;
    //     ans.gcd= nans.gcd;
    //     return ans;

    // }
    static triplet gcd(int a,int b){
        if(b==0){
            triplet ans = new triplet();
            ans.x = 1;
            ans.y = 0;
            ans.gcd = a;
            return ans; 
        }

        triplet nans = gcd(b,a%b);
        triplet ans = new triplet();
        ans.x = nans.y;
        ans.y = nans.x - (a/b)*nans.y;
        ans.gcd= nans.gcd;
        return ans;

    }
}