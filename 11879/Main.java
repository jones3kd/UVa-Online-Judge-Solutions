/*
 * Multiple of 17 (UVa 11879)
 *
 * Author: Kelsey Jones
 *   Date: 11/21/2014
 */

import java.util.Scanner;
import java.math.BigInteger;

class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int orgNum;
        BigInteger result = BigInteger.valueOf(-1);
        while (in.hasNextBigInteger())
        {
            BigInteger num1 = in.nextBigInteger();
            
            if(!num1.equals(BigInteger.valueOf(0)))
            {
            	String line = in.nextLine();
            	
                result = BigInteger.valueOf(0);
                BigInteger num2 = BigInteger.valueOf(0);
                
                num2 = num1.mod(BigInteger.valueOf(10));
                num2 = num2.multiply(BigInteger.valueOf(5));
                num1 = num1.divide(BigInteger.valueOf(10));
                result = num1.subtract(num2);

                if(result.mod(BigInteger.valueOf(17)).equals(BigInteger.valueOf(0)))
                    System.out.println("1");
                else
                    System.out.println("0");
            }
        }
    }
}
