using System;

namespace Lab8
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("\nEnter the size of matrix: ");
            int size = Convert.ToInt32(Console.ReadLine()); //введення розміру матриці
            int[,] matrix = mtrx_crt(new int[size, size]); //створення матриці
            Console.WriteLine("\nGenerated matrix: ");
            mtrx_out(matrix); //виведення створенної матриці
            int[] vector = vctr_crt(matrix); //створення вектора
            vctr_out(vector); //виведення вектора
        }

        static int[,] mtrx_crt(int[,] matrix) //функція створення матриці
        {
            Random rnd = new Random();
            for (int i = 0; i < matrix.GetLength(0); i++)
            {
                for (int j = 0; j < matrix.GetLength(1); j++)
                {
                    matrix[i, j] = rnd.Next(1, 10); //заповнення матриці випадковими числами у заданому діапазоні
                }
            }
            return matrix;
        }

        static void mtrx_out(int[,] matrix) //функція виведення створенної матриці
        {
            for (int i = 0; i < matrix.GetLength(0); i++)
            {
                for (int j = 0; j < matrix.GetLength(1); j++)
                {
                    Console.Write($"{matrix[i,j]}  ");
                }
                Console.Write("\n");
            }
        }
        
        static int[] col_max(int[,] matrix, int i) //функція пошуку стовпця, що містить максимальний елемент рядка
        {
            int j_max = 0;
            int max = Int32.MinValue;
            for (int j = 0; j < matrix.GetLength(1); j++) //пошук максимального елемента рядка
            {
                if (matrix[i, j] > max)
                {
                    max = matrix[i, j];
                    j_max = j;
                }
            }
            return col_corr(matrix, j_max);
        }

        static int[] col_corr(int[,] matrix, int j) //функція знаходження інших елементів стовпця
        {
            int[] arr = new int[matrix.GetLength(1)];
            for (int i = 0; i < matrix.GetLength(0); i++)
                arr[i] = matrix[i, j];
            return arr;
        }

        static int[] vctr_crt(int[,] matrix) //фукнція створення вектора
        {
            int scal_prod = 0;
            int[] j_col;
            int[] vector = new int[matrix.GetLength(0)];
            for (int i = 0; i < matrix.GetLength(0); i++) //заповнення вектора скалярними добутками
            {
                j_col = col_max(matrix, i);
                for (int j = 0; j < matrix.GetLength(1); j++) //обчислення скал. добутку
                    scal_prod += matrix[i, j] * j_col[j];
                vector[i] = scal_prod;
                scal_prod = 0;
            }
            return vector;
        }

        static void vctr_out(int[] vector) //функція виведення вектора
        {
            Console.Write("\nSet vector:\n[ ");
            foreach (var el in vector)
                Console.Write($"{el} ");
            Console.WriteLine("]");
        }
    }
}
