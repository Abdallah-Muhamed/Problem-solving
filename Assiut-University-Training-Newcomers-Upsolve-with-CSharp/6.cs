namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[1000];
            for (int i = 0; i < 1000; i++)
            {
                arr[i] = int.Parse(Console.ReadLine());
            }
            int max = arr[0];
            for (int i = 0; i < 1000; i++)
            {
                if (arr[i] > max)
                { 
                    max = arr[i];
                } 
            }
            Console.WriteLine(max);
        }
    }
}
/*
6. Write a program which prints the max value of array with size 1000.
*/
