import java.util.*;
import javax.swing.*;

class Demo {
    int[][] printArr(int arr[][]) {
        int arr1[][] = arr;
        for (int i = 0; i < arr1.length; i++) {
            for (int j = 0; j < arr1[i].length; i++) {
                arr1[i][j] = arr1[i][j] + 1;
            }
        }
        return arr1;
    }

    void sum(int... numbers) {
    
        for(int num:numbers)
            System.out.print(num + "    ");
        System.out.println("");
        // return result;
    }
   
    public static void main(String[] args) {

        Scanner scn = new Scanner(System.in);
        // int arr[] = { 2, 3, 56 };
        // Demo dm = new Demo();
        // dm.sum(1, 2);
        // dm.sum(1, 2,3,4,5);
        int num;
        for (String arg : args) {
            num = Integer.parseInt(arg);
            if (num % 2 == 0) {
                System.out.println(num + " is Even");
            }
        }

    }
}