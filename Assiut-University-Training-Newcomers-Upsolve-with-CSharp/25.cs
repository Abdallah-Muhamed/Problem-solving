namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
                    int areaA = CalculateRectangleArea(5, 10);
                    int areaB = CalculateRectangleArea(10, 15);
                    int areaC = CalculateRectangleArea(7, 11);
                    Console.WriteLine("Area A = " + areaA);
                    Console.WriteLine("Area B = " + areaB);
                    Console.WriteLine("Area C = " + areaC);
        } 
        static int CalculateRectangleArea(int length, int width)
                {
                    return length * width;
                }
            }

        }
    
/*
25- Write a program to create a function to calculate the area of rectangle
and then use this function to get the area of rectangles of dimensions:
a- l =5 , w =10
b- l =10 , w = 15
c- l =7 , w =11
*/
