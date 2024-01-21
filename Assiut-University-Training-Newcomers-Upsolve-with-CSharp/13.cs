namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            long  n, fact = 1;
            n = long.Parse(Console.ReadLine());
            while (n>1)
            {
                fact *= n;
                n--;
            }
            Console.WriteLine("Factorial = {0}",fact);

        }
    }
}
/*
13- Write a program to read in a positive number and print out its factorial.
*/
