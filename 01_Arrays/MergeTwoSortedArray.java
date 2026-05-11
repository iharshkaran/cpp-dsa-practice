public class MergeTwoSortedArray {
    public static void main(String[] args){
        int[] arr1 = {1,2,3,4,5};
        int[] arr2 = {6,7,8};
        int n = arr1.length;
        int m = arr2.length;

        int[] ans = new int[m+n];
        int i = n-1;
        int j = m-1;
        int k = (n+m)-1;

        while(i>=0 && j>=0){
            if(arr1[i]>arr2[j]){
                ans[k--] = arr1[i--];
            } else {
                ans[k--] = arr2[j--];
            }
        }
        while(i>=0){
            ans[k--] = arr1[i--];
        }
        while(j>=0){
            ans[k--] = arr2[j--];
        }
        Display(ans);
    }
    public static void Display(int[] arr) {
        for(int ele : arr) {
            System.out.print(ele + " ");
        }
    }
}
