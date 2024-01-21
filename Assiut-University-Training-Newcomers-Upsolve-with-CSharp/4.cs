namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] StudentId = new int[30];
            double[] Scores = new double[30];
            for (int i = 0; i < 30; i++)
            {
                StudentId[i]= int.Parse(Console.ReadLine());
                Scores[i]= double.Parse(Console.ReadLine());
            }

            int passed = 0;
            for (int i = 0; i < 30; i++)
            {
                if (Scores[i] < 50)
                    Scores[i] += 2;
                if (Scores[i] >= 50)
                    passed++;
            }

            int index = 0;
            double max=Scores[0];
            for (int i = 0; i < 30; i++)
            {
                if (Scores[i] > max)
                { 
                    max = Scores[i];
                    index = i;
                } 
            }
            Console.WriteLine("Student with highest score={0}",StudentId[index]);
            double perecent = (double)passed / 30 * 100;
            Console.WriteLine("Percentage of students who passed={0:F2}",perecent);



        }
    }
}
/*
4- Write a program that reads in the Student ID (integer) and scores (double, out
of 100) of 30 students and stores them in two arrays. Then the programs adds 2
points to all students whose score are less than 50. Next, the program displays
the Student ID with the highest grade as well the percentage of students who
passed the course.
*/
