package Basics;

import java.util.Scanner;

public class Find2ndMaxMin {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        IO.print("Enter the size of Array : ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            IO.print("Enter Element at index " + i + " : ");
            arr[i] = sc.nextInt();
        }
        for(int ele : arr){
            IO.print(ele + " ");
        }
        IO.println();
        // max 
        IO.println("max element is "+ max(arr));
        // min
        IO.println("min element is "+ min(arr));

        sc.close();
    } 
}