import java.util.Scanner;

public class count_inversion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long a[] =new long[n];
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }

        System.out.println(inversionCount(a,n));
    }
    
    static long inversionCount(long a[], long n)
    {
        
        // for(long v:a){
        //     System.out.print(v+" ");
        // }
        // System.out.println(a.length);
        return mergesort(a,(int)0,(int)n-1);    
    }
    static long mergesort(long [] a, int l ,int r){
        if(l<r){
            // int count=0;
            int mid =(l+r)/2;
            long count =mergesort(a,l,mid)+mergesort(a,mid+1,r);
            System.out.println("count="+count);
            long merging =merge(a,l,mid,r);
            System.out.println("merge:"+merging);
            return (count+merging);
        }
        return 0;
    }
    static long merge(long[] a, int l, int mid, int r){
        int n1 = mid-l+1;
        int n2 = r-mid;
        long counter=0;
        long le[] = new long[n1];
        long ri[] = new long[n2];
        
        for(int i=0;i<n1;i++){
            le[i]=a[l+i];
        }
        for(int i=0;i<n2;i++){
            ri[i]=a[mid+1+i];
        }
        int i=0,j=0;
        int k=l;
        while(i<n1 && j<n2){
            if(le[i]<=ri[j]){
                a[k]=le[i];
                i++;
            }else{
                counter=n1-i;
                System.out.println("couuter:"+counter);
                // System.out.println(le[i]+" "+ri[j]+" "+counter+" "+n1+" "+i);
                a[k]=ri[j];
                j++;
            }
            k++;
        }
        while(i<n1){
            a[k]=le[i];
            i++;
            k++;
        }
        while(j<n2){
            a[k]=ri[j];
            j++;
            k++;
        }
        return counter;
    }

}
