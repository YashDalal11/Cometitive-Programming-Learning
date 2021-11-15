import java.util.*;
public class printAllSubsequencesOfString{

    static List<String> al = new ArrayList<>();
    public static void main(String[] args) {
        String s = "abcd";
        findsubsequences(s, ""); // Calling a function
        System.out.println(al);
    }
    static void findsubsequences(String str , String ans){
        if(str.length()==0){
            al.add(ans);
            return;
        }
        findsubsequences(str.substring(1), ans+str.charAt(0));
        findsubsequences(str.substring(1), ans);
    }
}