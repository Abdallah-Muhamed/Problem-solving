namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            double[] arr = new double[10];
            double sum = 0;
            for (int i = 0; i < 10; i++)
            {
                arr[i] = double.Parse(Console.ReadLine());
                sum += arr[i];
            }
            double average = sum / 10;
            for (int i = 0; i < 10; i++)
            {
                double deviation = arr[i] - average;
                Console.WriteLine("Element {0}: {1:F2}", i+1, deviation);
            }

        }
    }
}
/*
11- Write a program that reads in an array of 10 elements, gets their average, and then display the deviation of each element from that average.
*/
