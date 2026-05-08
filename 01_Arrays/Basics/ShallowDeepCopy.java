package Basics;

import java.util.Arrays;

public class ShallowDeepCopy {
    public static void main(String[] args) {
        int[] arr = {2,3,4,5,6};
        int[] x = arr; // Shallow Copy
        x[0] = 200;
        System.out.println(arr[0]);

        int[] arr2 = {1,2,3,4,5};
        int[] y = Arrays.copyOf(arr2, arr2.length); // Deep Copy
        y[0] = 100;
        System.out.println(arr2[0]);
    }
}
