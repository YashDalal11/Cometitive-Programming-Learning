import java.util.*;

public class split0And1inString {
    public static void main(String[] args) {
        String str = "10101111100000011";
        int n = str.length();

        List<String> arr = new ArrayList<>();
        StringBuffer curr=new StringBuffer();
        for(int i=0;i<str.length()-1;i++){
            curr.append(str.charAt(i));
            if((str.charAt(i)=='0' && str.charAt(i+1)=='1')){
                arr.add(curr.toString()+str.charAt(i+1));
                i++;
                curr.delete(0, curr.length());
            }
        }
        System.out.println(arr);
    }
}
