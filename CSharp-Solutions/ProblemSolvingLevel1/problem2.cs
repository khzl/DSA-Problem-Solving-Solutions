using System;

class Problem2
{
    static void PrintName()
    {
        string? Name;
        Console.WriteLine("Please Enter Your Name:");

        // Name Enter From User 
        Name = Console.ReadLine();

        Console.WriteLine("Your Name Is: " + Name);
    }

    static void Main(string[] args)
    {
        // Calling The Function 
        PrintName();
    }
}