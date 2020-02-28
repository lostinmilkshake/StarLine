#include<iostream>

// Класс, который описывает квадрат
class Square
{
protected:
    float bottomLeftDotX; // Координаты левой нижней точки по х
    float bottomLeftDotY; // Координаты левой нижней точки по у
    float length; // Длина стороны квадрата
public:
    Square(float bottomLeftDotX=0, float bottomLeftDotY=0 , float length=0);
    ~Square();
    virtual void print();
};


Square::Square(float bottomLeftDotX, float bottomLeftDotY, float length)
{
    // Инициализация левой нижней точки
    this->bottomLeftDotX = bottomLeftDotX;
    this->bottomLeftDotY = bottomLeftDotY;
    // Инициализация длины
    this->length = length;
}

Square::~Square()
{
}

// Вывод в консоль точек квадрата
void Square::print() {
    std::cout << "Левая нижняя точка по х: " << bottomLeftDotX << " Левая нижняя точка по y: " << bottomLeftDotY << std::endl;
    std::cout << "Левая верхняя точка по х: " << bottomLeftDotX << " Левая верхняя точка по y: " << bottomLeftDotY + length << std::endl;
    std::cout << "Правая верхняя точка по х: " << bottomLeftDotX + length<< " Правая верхняя точка по y: " << bottomLeftDotY + length << std::endl;
    std::cout << "Правая нижняя точка по х: " << bottomLeftDotX + length<< " Правая нижняя точка по y: " << bottomLeftDotY << std::endl;
}


// Класс, который описывает параллелепипед
class Parallelepiped: public Square {
    private:
        float bottomLeftDotZ; // Координаты левой нижней точки нижней полоскости по z
        float height; // Высота параллелепипеда
    public:
        Parallelepiped(float bottomLeftDotX=0, float bottomLeftDotY=0, float bottomLeftDotZ=0, float length=0, float height=0);
        ~Parallelepiped();
        void print();
};

Parallelepiped::Parallelepiped(float bottomLeftDotX, float bottomLeftDotY, float bottomLeftDotZ, float length, float height) : Square(bottomLeftDotX, bottomLeftDotY , length) {
    // Инициализация левой нижней точки по z
    this->bottomLeftDotZ = bottomLeftDotZ;
    // Инициализация высоты
    this->height = height;
}

Parallelepiped::~Parallelepiped() {

}

// Вывод в консоль точек параллелепипеда
void Parallelepiped::print() {

    // Выводим точки нижней плоскости
    std::cout << "Левая нижняя нижней плоскости точка по х: " << bottomLeftDotX;
    std::cout << " Левая нижняя нижней плоскости точка по y: " << bottomLeftDotY;
    std::cout << " Левая нижняя нижней плоскости точка по z: " << bottomLeftDotZ << std::endl;

    std::cout << "Правая нижняя нижней плоскости точка по х: " << bottomLeftDotX + length;
    std::cout << " Правая нижняя нижней плоскости точка по y: " << bottomLeftDotY;
    std::cout << " Правая нижняя нижней плоскости точка по z: " << bottomLeftDotZ << std::endl;

    std::cout << "Правая верхняя нижней плоскости точка по х: " << bottomLeftDotX + length;
    std::cout << " Правая верхняя нижней плоскости точка по y: " << bottomLeftDotY + length;
    std::cout << " Правая верхняя нижней плоскости точка по z: " << bottomLeftDotZ << std::endl;

    std::cout << "Левая верхняя нижней плоскости точка по х: " << bottomLeftDotX;
    std::cout << " Левая верхняя нижней плоскости точка по y: " << bottomLeftDotY + length;
    std::cout << " Левая верхняя нижней плоскости точка по z: " << bottomLeftDotZ << std::endl;

    // Выводим точки верхней плоскоти
    std::cout << "Левая нижняя верхней плоскости точка по х: " << bottomLeftDotX;
    std::cout << " Левая нижняя верхней плоскости точка по y: " << bottomLeftDotY;
    std::cout << " Левая нижняя верхней плоскости точка по z: " << bottomLeftDotZ + height << std::endl;

    std::cout << "Правая нижняя верхней плоскости точка по х: " << bottomLeftDotX + length;
    std::cout << " Правая нижняя верхней плоскости точка по y: " << bottomLeftDotY;
    std::cout << " Правая нижняя верхней плоскости точка по z: " << bottomLeftDotZ + height << std::endl;

    std::cout << "Правая верхняя верхней плоскости точка по х: " << bottomLeftDotX + length;
    std::cout << " Правая верхняя верхней плоскости точка по y: " << bottomLeftDotY + length;
    std::cout << " Правая верхняя верхней плоскости точка по z: " << bottomLeftDotZ + height<< std::endl;

    std::cout << "Левая верхняя верхней плоскости точка по х: " << bottomLeftDotX;
    std::cout << " Левая верхняя верхней плоскости точка по y: " << bottomLeftDotY + length;
    std::cout << " Левая верхняя верхней плоскости точка по z: " << bottomLeftDotZ + height << std::endl;
}
