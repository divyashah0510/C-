import java.util.*;
public class rhombus 
{
    public static void main(String args[])
    {
        int x;
        System.out.println("Enter a number:");
        Scanner sc=new Scanner(System.in);
        x=sc.nextInt();
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=x-i;j++)
            {
                System.out.print(" ");
            }
            for(int j=1;j<=x;j++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }   
}
