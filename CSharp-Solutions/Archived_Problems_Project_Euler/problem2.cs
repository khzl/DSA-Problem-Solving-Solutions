using System;
class Program
{
    static int EvenFibonacciNumbers()
    {
        int FirstTerm = 1 , SecondTerm = 2 , EvenSum = 0;
        while (SecondTerm < 4000000)
        {
            if (SecondTerm % 2 == 0)
            {
                EvenSum += SecondTerm;
            }

            int NextTerm = FirstTerm + SecondTerm;
            FirstTerm = SecondTerm;
            SecondTerm = NextTerm;
        }
        return EvenSum;
    }

    static void Main()
    {
        int EvenSum = EvenFibonacciNumbers();
        Console.WriteLine("The sum of the even-valued terms in the Fibonacci sequence that do not exceed four million is: "
        + EvenSum);    
    }
}