import java.util.Scanner;

public class Find2ndMaxMin {
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

        // 2nd Max and Min using 2 loop
        System.out.println("Second max : "+secMax1(arr));
        System.out.println("Second min : "+secMin1(arr));

        // 2nd Max and Min using 1 loop
        System.out.println("Second max : "+secMax2(arr));
        System.out.println("Second min : "+secMin2(arr));

        sc.close();
    } 
    // 2nd Max using 2 loops
    public static int secMax1(int[] arr){
        int max = Integer.MIN_VALUE;

        for(int i=0; i<arr.length; i++){
            if(max<arr[i]) max = arr[i];
        }

        int secMax = Integer.MIN_VALUE;
        for(int i=0; i<arr.length; i++){
            // if(secMax<arr[i] && max != arr[i]) secMax = arr[i];
            if(max==arr[i]) continue;
            if(secMax<arr[i]) secMax = arr[i];
        }
        return secMax;
    }
    // 2nd Min using 2 loops
    public static int secMin1(int[] arr){
        int min = Integer.MAX_VALUE;

        for(int i=0; i<arr.length; i++){
            if(min>arr[i]) min = arr[i];
        }

        int secMin = Integer.MAX_VALUE;
        for(int i=0; i<arr.length; i++){
            if(secMin>arr[i] && min != arr[i]) secMin = arr[i];
        }
        return secMin;
    }

    // 2nd Max using 1 loop
    public static int secMax2(int[] arr){
        int max = Integer.MIN_VALUE;
        int secMax = Integer.MIN_VALUE;

        for(int i=0; i<arr.length; i++){
            if(max<arr[i]){
                secMax = max;
                max = arr[i];
            }
            else if(secMax<arr[i] && max != arr[i]) secMax = arr[i];
        }
        return secMax;
    }
    // 2nd Min using 1 loop
    public static int secMin2(int[] arr){
        int min = Integer.MAX_VALUE;
        int secMin = Integer.MAX_VALUE;

        for(int i=0; i<arr.length; i++){
            if(min>arr[i]){
                secMin = min;
                min = arr[i];
            } 
            else if(secMin>arr[i] && min!=arr[i]) secMin = arr[i];
        }
        return secMin;
    }
}