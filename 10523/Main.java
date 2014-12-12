/*
 * The Sam's contest (UVa 10523)
 *
 * Author: Kelsey Jones
 *   Date: 11/21/2014
 */

import java.util.Scanner;
import java.math.BigInteger;

class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N;
        int A;
        while (in.hasNextInt())
        {
            N = in.nextInt();
            A = in.nextInt();
            String line = in.nextLine();
            
            BigInteger sum = BigInteger.valueOf(0);
            
            for(int i = 1; i <= N; i++)
            {
                BigInteger num = BigInteger.valueOf(A);
                
                num = num.pow(i);
                num = num.multiply(BigInteger.valueOf(i));
                sum = sum.add(num);
            }
            System.out.println(sum);
        }
    }
}
