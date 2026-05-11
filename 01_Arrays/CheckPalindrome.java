import java.util.Scanner;

public class CheckPalindrome {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of Array : ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            System.out.print("Enter Element at index " + i + " : ");
            arr[i] = sc.nextInt();
        }
        for(int ele : arr){
            System.out.print(ele + " ");
        }
        System.out.println();
        
        // check Palindrome
        checkPalindrome(arr);
        sc.close();
    }

    public static void checkPalindrome(int[] arr){
        int n = arr.length;
        boolean flag = true;
        for(int i=0,j=n-1; i<j; i++,j--){
            if(arr[i]!=arr[j]){
                flag = false;
                break;
            }
        }
        if(flag == true) System.out.println("Given Array is palindrome");
        else System.out.println("Given Array is not palindrome");
    }
}
