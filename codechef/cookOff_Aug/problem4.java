import java.util.ArrayList;
import java.util.Scanner;
public class problem4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
		    int n = sc.nextInt();
		    sc.nextLine();
		    ArrayList<String> a = new ArrayList<>();
		    for(int i=0;i<n;i++){
		        a.add(sc.nextLine());
		    }
		    for(int i=0;i<=n;i++){
		        StringBuilder s = new StringBuilder();
		        s.append(bin(i));
		        while(s.length()<n){
		            s.insert(0,"0");
		        }
	            if(!a.contains(s.toString())){
	                System.out.println(s.toString());
	                break;
	            }
		    }
		}
	}
	public static String bin(int n){
	    StringBuilder s = new StringBuilder();
	    while(n>0){
	        s.append(n%2);
	        n/=2;
	    }
	    s.reverse();
	    return s.toString();
    }
}
