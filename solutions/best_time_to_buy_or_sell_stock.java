import java.util.ArrayList;

public class best_time_to_buy_or_sell_stock{
    public static void main(String[] args) {
        int a[]= new int[6];
        a[0]=4;
        a[1]=7;
        a[2]=3;
        a[3]=8;
        a[4]=2;
        a[5]=4;
        // System.out.println(maxProfit(a));
        int minprice =Integer.MAX_VALUE;
        int maxProfit=0;
        for(int i=0;i<a.length;i++){
            if(minprice>a[i]){
                minprice=a[i];
            }
            if(maxProfit<a[i]-minprice){
                maxProfit=a[i]-minprice;
            }
        }
        System.out.println(maxProfit);
    }

    //bad algo
    // public static int maxProfit(int[] prices) {
    //     ArrayList<Integer> min = new ArrayList<>();
    //     ArrayList<Integer> max = new ArrayList<>();
    //     int minint= Integer.MAX_VALUE;
    //     int maxint = Integer.MIN_VALUE;
    //     int n=prices.length;
    //     for(int i=0;i<n;i++){
    //         if(maxint<prices[n-1-i]){
    //             max.add(n-1-i);
    //             maxint=prices[n-1-i];
    //         }
    //         if(minint>prices[i]){
    //             min.add(i);
    //             minint=prices[i];
    //         }
    //     }
    //     int ans=Integer.MIN_VALUE;
    //     for(int i=0;i<max.size();i++){
    //         for(int j=0;j<min.size();j++){
    //             if(max.get(i)>min.get(j)){
    //                 int amt =prices[max.get(i)]-prices[min.get(j)];
    //                 ans=Math.max(ans,amt);
    //             }
    //             else{
    //                 int amt =prices[min.get(j)]-prices[max.get(i)];
    //                  ans=Math.max(ans,amt);
    //             }
    //         }
    //     }
    //     return ans;
    // }
}