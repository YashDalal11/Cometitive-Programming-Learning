
// time complexity O(n)
// testCases
// [1,2]
// [1,3,2]
// [2,3,1,3,3]
// [5,1,1]

import java.util.Arrays;
import java.util.Scanner;

public class next_permutation{
    public static void main(String[] args) {
        int a[] = {5,1,1};
        nextPermutation(a);
        for(int v:a){
            System.out.print(v+" ");
        }
    }
    public static void nextPermutation(int[] num) {
        if(num.length==1) return;
        int i=num.length-2;
        while(i>=0 && num[i]>=num[i+1]){
            i--;
        }
        if(i>=0){
            int j=num.length-1;
            while(num[i]>=num[j]){
                j--;
            }
            swap(num,i,j);
        }
        
        reverse(num,i+1,num.length-1);
        
    }
    public static void swap(int []arr ,int a,int b){
        int temp=arr[a];
        arr[a]=arr[b];
        arr[b]=temp;
    }
    public static void reverse(int[] arr,int a,int b){
        while(a<b){
            swap(arr,a,b);
            a++;
            b--;
        }
    }
}