using System;

namespace Lab9
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("\nEnter some words: ");
            string s = Console.ReadLine();
            string[] ss = s.Split(new char[] { ' ' });
            Console.WriteLine($"\nUnsorted list of words: ");
            ListOut(ss);
            ss = ListSort(ss);
            Console.WriteLine("\nSorted list of words: ");
            ListOut(ss);
        }
        
        static void ListOut(string[] ss)
        {
            for (int i = 0; i < ss.Length; i++)
                Console.WriteLine($"{ss[i]}\t({ss[i].Length})");
        }

        static string[] ListSort(string[] ss)
        {
            for (var i = 1; i < ss.Length; i++)
            {
                for (var j = 0; j < ss.Length - i; j++)
                {
                    if (ss[j].Length > ss[j + 1].Length)
                        (ss[j], ss[j + 1]) = (ss[j + 1], ss[j]);
                }
            }
            return ss;
        }
    }
}