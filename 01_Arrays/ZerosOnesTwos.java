public class ZerosOnesTwos {
    public static void main(String[] args) {
        int[] arr = {1,2,0,0,2,1,0,1,2,2};
        int n = arr.length;
        int no0 = 0;
        int no1 = 0;
        int no2 = 0;

        //Method-1 Two pass method
//        for(int i=0; i<n; i++){
//            if(arr[i]==0) no0++;
//            else if(arr[i]==1) no1++;
//            else no2++;
//        }
//        for(int i=0; i<n; i++){
//            if(i<no0) arr[i]=0;
//            else if(i<(no0+no1)) arr[i]=1;
//            else arr[i] = 2;
//        }

        //Method-2 One pass method
        // Three pointers Algo (Dutch Flag Algo)
        int low =0;
        int mid = 0;
        int high = n-1;

        while(mid<high){
            if(arr[mid]==2){
                int temp = arr[high];
                arr[high] = arr[mid];
                arr[mid] = temp;
                high--;
            }
            else if(arr[mid]==0){
                int temp = arr[low];
                arr[low] = arr[mid];
                arr[mid] = temp;
                low++;
                mid++;
            }
            else mid++;
        }

        Display(arr);
    }
    public static void Display(int[] arr) {
        for(int ele : arr) {
            System.out.print(ele + " ");
        }
    }
}
