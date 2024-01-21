namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            double num, bill;
            num = double.Parse(Console.ReadLine());
            bill= double.Parse(Console.ReadLine());
            if (bill < 50)
            {
                double tip = 2 * num;
                Console.WriteLine("the tip={0} \nthe total ={1}",tip,bill+tip);
            }
            else if(bill>50&&bill<300)
            {
                double tip = (bill/10) + (3*num);
                Console.WriteLine("the tip={0} \nthe total ={1}",tip,tip+bill);
            }
            else
            {
                double tip = (bill / 15);
                Console.WriteLine("the tip={0:f2} \nthe total ={1:f2}",tip,tip+bill);
            }
        }
    }
}
/*
8- Write a program to calculate the tip (بقشيش ) a waiter should get in a restaurant. The input to the program is the number of people in the group and the bill. The tip is calculated as follows: if the bill (فاتورة ) is less than 50 pounds then the tip is fixed at 2 pounds per person in the group. If the bill is between 50 and 300 pounds then the tip is 10% of the bill plus 3 pound per person. If the bill is above 300 pounds then the tip is 15% of the bill. The output of the program should be the tip AND the total amount to be paid.
*/
