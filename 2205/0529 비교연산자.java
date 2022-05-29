import java.util.Scanner;

public class Main {

    public static void main(String[] args){

        String type;
        Scanner in = new Scanner(System.in);
        int i = 1;
        while(true){
            int n1 = in.nextInt();
            type = in.next();
            int n2 = in.nextInt();

            if(type.equals("E") || type.equals("e")){
                break;
            }
            switch(type){
                case ">":
                    System.out.print("Case " + i +": ");
                    System.out.println(n1>n2);
                    break;
                case "==":
                    System.out.print("Case " + i +": ");
                    System.out.println(n1==n2);
                    break;
                case "<":
                    System.out.print("Case " + i +": ");
                    System.out.println(n1<n2);
                    break;
                case "<=":
                    System.out.print("Case " + i +": ");
                    System.out.println(n1<=n2);
                    break;
                case ">=":
                    System.out.print("Case " + i +": ");
                    System.out.println(n1>=n2);
                    break;
                case "!=":
                    System.out.print("Case " + i +": ");
                    System.out.println(n1!=n2);
                    break;
                default:
                    return;
            }
            i++;
        }
        in.close();
    }
}
