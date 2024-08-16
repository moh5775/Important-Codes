
import java.util.Scanner;

public class CF_A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str = input.nextLine();
        char ch = input.nextLine().charAt(0);
        int index = str.lastIndexOf(ch);
        if (index != -1) {
            str = str.substring(0, index) + str.substring(index + 1);
        }
        System.out.println(str);
    }
}
