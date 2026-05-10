import java.util.Scanner;

public class TwoSum {
     public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of Array : ");
        int n = sc.nextInt();
        int[] arr = new int[n];
         System.out.print("Enter Elements : ");
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }
        for(int ele : arr){
            System.out.print(ele + " ");
        }
        System.out.println();
        System.out.print("Target : ");
        int target = sc.nextInt();
        // two Sum
        twoSum(arr , target);
        sc.close();
    }

    public static void twoSum(int[] arr, int target) {
        boolean flag = false;
        for(int i=0; i<arr.length-1; i++){
            for(int j=i+1; j<arr.length; j++){
                if(arr[i]+arr[j]==target){
                    flag = true;
                    break;
                }
                if(flag) break;
            }
        }
        if(!flag) System.out.println("Not Exist");
        else System.out.println("Exist");
    }
}
