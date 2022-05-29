import java.util.Scanner;

public class Main {

    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        for(int i = 1; i <= 1000; i++){
            int n1 = in.nextInt();
            String type = in.next();
            int n2 = in.nextInt();

            if(type.equals("E")){
                break;
            }
            switch(type){
                case "!=":
                    if(n1 != n2){
                        System.out.printf("Case %d: true", i);
                        break;
                    }else {
                        System.out.printf("Case %d: false", i);
                        break;
                    }
                case "==":
                    if(n1 == n2){
                        System.out.printf("Case %d: true", i);
                        break;
                    }else {
                        System.out.printf("Case %d: false", i);
                        break;
                    }
                case "<":
                    if(n1<n2){
                        System.out.printf("Case %d: true", i);
                        break;
                    }else{
                        System.out.printf("Case %d: false", i);
                        break;
                    }
                case "<=":
                    if(n1<=n2){
                        System.out.printf("Case %d: true", i);
                        break;
                    }else{
                        System.out.printf("Case %d: false", i);
                        break;
                    }
                case ">=":
                    if(n1>=n2){
                        System.out.printf("Case %d: true", i);
                        break;
                    }else{
                        System.out.printf("Case %d: false", i);
                        break;
                    }
                case ">":
                    if(n1>n2){
                        System.out.printf("Case %d: true", i);
                        break;
                    }else{
                        System.out.printf("Case %d: false", i);
                        break;
                    }
            }
        }
        in.close();
    }
}
