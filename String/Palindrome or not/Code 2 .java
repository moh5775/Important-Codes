
import java.util.Scanner;

public class CF_A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str = input.nextLine();
        StringBuilder rev = new StringBuilder(str);
        rev.reverse();
        System.out.println(rev);
        if (str.contentEquals(rev)) {
            System.out.println("pallindome");
        } else {
            System.out.println("not");
        }
    }
}
