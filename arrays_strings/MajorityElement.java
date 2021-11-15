public class MajorityElement{
    public static void main(String[] args) {
        int a[] = {1,2,4,5};
        int value = a[0];
        int count=1;
        for(int i=1;i<a.length;i++){
            if(a[i]==value){
                count++;
            }
            else {
                count--;
            }
            if(count==0){
                value=a[i];
                count=1;
            }
        }
        int freqCount=0;
        for(int v:a){
            if(v==value){
                freqCount++;
            }
        }
        int ans = freqCount>a.length/2 ? value:-1;
        System.out.println(ans);
        
    }
}