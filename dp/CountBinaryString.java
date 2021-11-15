import java.util.Scanner;

public class CountBinaryString{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int oczeros = 1,ocones = 1;

        for(int i=2;i<=n;i++){
            int nczeros = ocones;
            int ncones = oczeros+ocones;

            ocones = ncones;
            oczeros = nczeros;
        }
        System.out.println(oczeros+ocones);
    }
}