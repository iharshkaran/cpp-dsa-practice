import java.util.Scanner;

public class ReverseArray {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the size of Array : ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.print("Enter Elements : ");
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }

        System.out.print("Given Array : "); 
        for(int ele : arr){
            System.out.print(ele + " ");
        }
        System.out.println();

        // reverse
        reverseArray(arr);
        print(arr);

        sc.close();
    } 

    public static void reverseArray(int[] arr) {
        int n = arr.length;
        for(int i=0, j=n-1; i<j; i++,j--){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    public static void print(int[] arr) {
        for(int ele : arr){
            System.out.print(ele + " ");
        }
    }
}
