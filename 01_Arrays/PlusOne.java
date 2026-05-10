public class PlusOne {
    public static void main(String[] args) {
        int[] arr = {9,9,9};
        int n = arr.length;
        boolean flag = true;
        for(int i=n-1; i>=0; i--){
            if(arr[i]<9){
                arr[i]++;
                Display(arr);
                flag = false;
                break;
            }
            arr[i] = 0;
        }
        if(flag){
            int[] ans = new int[n + 1];
            ans[0] = 1;
            Display(ans);
        }
    }
    public static void Display(int[] arr) {
        for(int ele : arr) {
            System.out.print(ele + " ");
        }
    }
}
