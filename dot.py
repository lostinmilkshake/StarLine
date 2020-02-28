class Dot2d:
    def __init__(self, x=0, y=0): 
        try:
            self.__x = float(x) # Инициализация точки х
            self.__y = float(y) # Инициализация точки y
        except Exception:
            # Кидаем ошибку, если переданные данные не являются числами
            raise ValueError("Invalid values")
    # Вывод координат точки в консоль
    def printDot(self):
        print("Координаты точки по x: ", self.__x)
        print("Координаты точки по y: ", self.__y)
    # Геттер x
    def get__x(self):
        return self.__x
    # Геттер у
    def get__y(self):
        return self.__y

class Dot3d(Dot2d):
    def __init__(self, x=0, y=0, z=0):
        try:
            Dot2d.__init__(self, x, y)
            self.__z = z # Инициализация точки z
        except Exception:
            # Кидаем ошибку, если переданные данные не являются числами
            raise ValueError("Invalid values")
    # Вывод координат точки в консоль
    def printDot(self):
        print("Координаты точки по x: ", self.get__x())
        print("Координаты точки по y: ", self.get__y())
        print("Координаты точки по z: ", self.__z)
