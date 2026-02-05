using System;
using System.Text;

public class Program{
    public static void PrintName(string Name)
    {
        Console.WriteLine($"\nYour name is: {Name}\n");
    }

    public static void Main(string[] args)
    {
        Console.OutputEncoding = Encoding.UTF8;

        Console.Write("Enter your name: ");
        string name = Console.ReadLine();

        PrintName(name);
    }
}