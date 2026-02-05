using System;

class Problem1
{
    // Out access modifier is used to make the method accessible from outside the class
    static void FindMultiplesOf3Or5(out int TotalSum)
    {
        TotalSum = 0;
        for (int currentNumber = 0; currentNumber < 1000; currentNumber++)
        {
            if (currentNumber % 3 == 0 || currentNumber % 5 == 0)
            {
                TotalSum += currentNumber;
            }
        }
        Console.WriteLine("TotalSum = " + TotalSum);
    }

    static void Main(string[] args)
    {
        // Variable to hold the sum 
        int TotalSum;
        // Calling The Function 
        FindMultiplesOf3Or5(out TotalSum);
    }
}