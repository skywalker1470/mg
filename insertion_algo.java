import java.util.*;

class insertion_algo {
    static void insert_sort(int N, int[] arr) {
        for (int i = 1; i < N; i++) {
            int temp = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > temp) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = temp;
            System.out.print((j + 1) + " ");
        }
        System.out.println();
    }

    public static void main(String args[]) {
        Scanner scanf = new Scanner(System.in);
        int T = scanf.nextInt();
        for (int i = 0; i < T; i++) {
            int N = scanf.nextInt();
            int[] arr = new int[N];
            for (int j = 0; j < N; j++) {
                arr[j] = scanf.nextInt();
            }
            insert_sort(N, arr);
        }
    }
}
