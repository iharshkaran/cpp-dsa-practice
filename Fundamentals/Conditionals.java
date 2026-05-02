import java.util.Scanner;

public class Conditionals {
    public static void main(String[] args) {

        // if statement
        System.out.println("--- if statement ---");
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your Number: ");
        int number = scanner.nextInt();
        if (number%2 == 0) {
            System.out.println("The number is even.");
        } 
        if (number%2 != 0) {
            System.out.println("The number is odd.");
        }

        // if else statement
        System.out.println("-----------------------------");
        System.out.println("--- else if statement ---");
        System.out.println("Find the largest of three numbers:");
        
        System.out.print("Enter first number: ");
        int num1 = scanner.nextInt();
        System.out.print("Enter second number: ");
        int num2 = scanner.nextInt();
        System.out.print("Enter third number: ");
        int num3 = scanner.nextInt();
        if (num1 > num2 && num1 > num3) {
            System.out.println("The largest number is: " + num1);
        } else if (num2 > num1 && num2 > num3) {
            System.out.println("The largest number is: " + num2);
        } else {
            System.out.println("The largest number is: " + num3);
        }

        // nested if else statement
        System.out.println("-----------------------------");
        System.out.println("--- nested if else statement ---");

        System.out.print("Enter first number: ");
        int n1 = scanner.nextInt();
        System.out.print("Enter second number: ");
        int n2 = scanner.nextInt();
        System.out.print("Enter third number: ");
        int n3 = scanner.nextInt();
        
        if(n1 >= n2) {
            if(n1 >= n3) {
                System.out.println("The largest number is: " + n1);
            } else {
                System.out.println("The largest number is: " + n3);
            }
        } else {
            if(n2 >= n3) {
                System.out.println("The largest number is: " + n2);
            } else {
                System.out.println("The largest number is: " + n3);
            }
        }
        // Ternary operator
        System.out.println("-----------------------------");
        System.out.println("--- Ternary Operator ---");
        System.out.print("Enter a number: ");
        int num = scanner.nextInt();
        System.out.println((num % 2 == 0) ? "Even" : "Odd");

        // switch statement
        System.out.println("-----------------------------");
        System.out.println("--- switch statement ---");
        System.out.print("Enter a day of the week (1-7): ");
        int day = scanner.nextInt();
        switch (day) {
            case 1:
                System.out.println("Monday");
                break;
            case 2:
                System.out.println("Tuesday");
                break;
            case 3:
                System.out.println("Wednesday");
                break;
            case 4:
                System.out.println("Thursday");
                break;
            case 5:
                System.out.println("Friday");
                break;
            case 6:
                System.out.println("Saturday");
                break;
            case 7:
                System.out.println("Sunday");
                break;
            default:
                System.out.println("Invalid day number. Please enter a number between 1 and 7.");
        }

        
    }
}