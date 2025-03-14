using System;

public class Segment
{
    private double x1, y1, x2, y2;

    // Конструктор за замовчуванням
    public Segment()
    {
        x1 = 0;
        y1 = 0;
        x2 = 1;
        y2 = 1;
    }

    // Конструктор з параметрами
    public Segment(double x1, double y1, double x2, double y2)
    {
        this.x1 = x1;
        this.y1 = y1;
        this.x2 = x2;
        this.y2 = y2;
    }

    // Метод для обчислення довжини відрізка
    public double GetLength()
    {
        return Math.Sqrt(Math.Pow(x2 - x1, 2) + Math.Pow(y2 - y1, 2));
    }

    // Метод для обчислення кута між віссю OX
    public double GetAngleOX()
    {
        return Math.Atan2(y2 - y1, x2 - x1) * 180 / Math.PI;
    }

    // Метод виводу даних
    public void Display()
    {
        Console.WriteLine($"Відрізок: ({x1}, {y1}) -> ({x2}, {y2})");
        Console.WriteLine($"Довжина: {GetLength()}");
        Console.WriteLine($"Кут з віссю OX: {GetAngleOX()} градусів");
    }
}
