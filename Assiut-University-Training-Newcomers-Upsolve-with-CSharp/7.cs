namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            double[] arr = new double[100];
            double sum = 0;
            for (int i = 0; i < 100; i++)
            {
                arr[i] = double.Parse(Console.ReadLine());
                sum += arr[i];
            }
            Console.WriteLine("AVG={0:F2}",(double)sum/100);
        }
    }
}
/*
7- Write a program calculate the average of subject grade of 100 students.
*/
