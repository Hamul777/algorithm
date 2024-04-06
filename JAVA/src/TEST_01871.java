import java.util.Scanner;

public class TEST_01871 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] array = new int[10000];

        for(int i = 0; i < n; i++){
            array[i] = sc.nextInt();
            if(array[i] < m){
                System.out.print(array[i] + " ");
            }
        }
    }
}
