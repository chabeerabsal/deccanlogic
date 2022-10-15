import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		System.out.println("Hello World");
		  int num;
        Scanner me=new Scanner(System.in);
        System.out.println("Enter a number");
        num=me.nextInt();
        System.out.println("number is"+" "+num);
        me.nextLine();
        String cha=me.nextLine();
        String ab=me.nextLine();
        
       // me.nextLine();
        int a=me.nextInt();
        System.out.println(cha+ab);
        System.out.println(a);
        System.out.println(ab);
        System.out.println(num);
        
	}
}