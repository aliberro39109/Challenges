using System;

namespace ConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            string str,str2 = "";
            int n;
            do
            {
                n = int.Parse(Console.ReadLine());
            } while (n <= 0);
            str = Console.ReadLine();
            for (int i = 0;  i < n; i++)
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                    str2 += (char)((str[i] + 3 - 'a') % 26 + 'a');
                }
                else if (str[i] >= 'A' && str[i] <= 'Z')
                {
                    str2 += (char)((str[i] + 3 - 'A') % 26 + 'A');
                }
                else
                    str2 += (char)str[i];
            }
            Console.WriteLine(str2);
            Console.ReadKey();
        }
    }
}
