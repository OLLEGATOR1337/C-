#include <f.cpp>

//int hello(int); //ошибка будет, так как функция только объявлена, но не определена.

int hello(int x) // функция определена
{
    return 1;
}

/*int static hello(int x) // static ограничивает видимость функции
{
    return 1;
}*/
