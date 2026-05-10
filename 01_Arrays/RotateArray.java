import java.util.Scanner;

public class RotateArray {
    public static void main(String[] args) {
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

        System.out.print("Enter k steps :");
        int k = sc.nextInt();
        // rotate
        rotateArray(arr,k);

        Display(arr);

        sc.close();
    }

    public static void rotateArray(int[] arr, int k){
        int n = arr.length;
        k %= n;

        reverseArray(arr,0,n-k-1);
        reverseArray(arr,n-k,n-1);
        reverseArray(arr,0,n-1);
    }

    public static void reverseArray(int[] arr, int i, int j) {
        while(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    public static void Display(int[] arr) {
        for(int ele : arr) {
            System.out.print(ele + " ");
        }
    }
}
