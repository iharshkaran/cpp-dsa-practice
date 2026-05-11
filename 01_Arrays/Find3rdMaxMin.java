package Basics;

import java.util.Scanner;

public class Find3rdMaxMin {
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

        // 3nd Max and Min using 3 loop
        System.out.println("Third max : "+thirdMax1(arr));
        System.out.println("Third min : "+thirdMin1(arr));

        // 3nd Max and Min using 1 loop
        System.out.println("Third max : "+thirdMax2(arr));
        System.out.println("Third min : "+thirdMin2(arr));

        sc.close();
    } 
    // 3rd Max using 3 loops
    public static int thirdMax1(int[] arr){
        int max = Integer.MIN_VALUE;
        int secMax = Integer.MIN_VALUE;
        int thirdMax = Integer.MIN_VALUE;

        // find max
        for(int i=0; i<arr.length; i++){
            if(max<arr[i]) max = arr[i];
        }
        // find 2nd max
        for(int i=0; i<arr.length; i++){
            if(secMax<arr[i] && max != arr[i]){
                secMax = arr[i];
            }
        }
        // find 3rd max
        for(int i=0; i<arr.length; i++){
            if(max != arr[i] && thirdMax<arr[i] && secMax!=arr[i]){
                thirdMax = arr[i];
            }
        }
        return thirdMax;
    }
    // 3rd Min using 3 loops
    public static int thirdMin1(int[] arr){
        int min = Integer.MAX_VALUE;
        int secMin = Integer.MAX_VALUE;
        int thirdMin = Integer.MAX_VALUE;

        // find min
        for(int i=0; i<arr.length; i++){
            if(min>arr[i]) min = arr[i];
        }
        // find 2nd min
        for(int i=0; i<arr.length; i++){
            if(secMin>arr[i] && min != arr[i]) secMin = arr[i];
        }
        // find 3rd min
        for(int i=0; i<arr.length; i++){
            if(thirdMin>arr[i] && secMin!=arr[i] && min!=arr[i]) thirdMin = arr[i];
        }
        return thirdMin;
    }

    // 3rd Max using 1 loop
    public static int thirdMax2(int[] arr){
        int max = Integer.MIN_VALUE;
        int secMax = Integer.MIN_VALUE;
        int thirdMax = Integer.MIN_VALUE;

        for(int i=0; i<arr.length; i++){
            if(max<arr[i]){
                thirdMax = secMax;
                secMax = max;
                max = arr[i];
            }
            else if(secMax<arr[i] && max != arr[i]){
                thirdMax = secMax;
                secMax = arr[i];
            }
            else if(thirdMax<arr[i] && secMax!=arr[i] && max!=arr[i]) thirdMax = arr[i];
        }
        return thirdMax;
    }
    // 3rd Min using 1 loop
    public static int thirdMin2(int[] arr){
        int min = Integer.MAX_VALUE;
        int secMin = Integer.MAX_VALUE;
        int thirdMin = Integer.MAX_VALUE;

        for(int i=0; i<arr.length; i++){
            if(min>arr[i]){
                thirdMin = secMin;
                secMin = min;
                min = arr[i];
            } 
            else if(secMin>arr[i] && min!=arr[i]){
                thirdMin = secMin;
                secMin = arr[i];
            }
            else if(thirdMin>arr[i] && min!=arr[i] && secMin!=arr[i]) thirdMin = arr[i];
        }
        return thirdMin;
    }
}
