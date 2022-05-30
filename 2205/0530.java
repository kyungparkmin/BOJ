import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n1, n2, sum;
        String t1, t2;
        n1 = in.nextInt();
        t1 = in.next();
        n2 = in.nextInt();
        t2 = in.next();
        sum = in.nextInt();

        switch(t1){
            case "+":
                if(n1 + n2 == sum){
                    System.out.println("YES");
                }else{
                    System.out.println("NO");
                }
                break;
            case "-":
                if(n1 - n2 == sum){
                    System.out.println("YES");
                }else {
                    System.out.println("NO");
                }
                break;
            case "*":
                if(n1 * n2 == sum){
                    System.out.println("YES");
                }else{
                    System.out.println("NO");
                }
                break;
            case "/":
                if(n1 / n2 == sum){
                    System.out.println("YES");
                }else{
                    System.out.println("NO");
                }
                break;
        }
    }
}
