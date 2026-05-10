package Basics;

import java.util.ArrayList;

public class ArrayListBasic {
    public static void main(String[] args) {
        
        ArrayList<Integer> list = new ArrayList<>(5);
        list.add(0,1);
        list.add(1,2);
        list.add(2,3);
        list.add(3,4);
        list.add(4,5);

        System.out.println(list);

    }
}
