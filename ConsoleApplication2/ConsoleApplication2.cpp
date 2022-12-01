#include <iostream>

int main()
{

    float decimal = 1;
    double a, b, suma, c, d, resta, e, mul, f, divi, g, h, potencia, i, raiz, div1, div2;

    //Suma

    std::cout << "Hola  que tal inserta primer dato a sumar\n";
    std::cin >> a;
    std::cout << " segundo dato\n";
    std::cin >> b;
    suma = a + b;
    std::cout << "respuesta =  " << suma << std::endl;

    //Resta
    std::cout << "dato  1 a restar\n";
    std::cin >> c;
    std::cout << "dato 2\n";
    std::cin >> d;
    resta = c - d;
    std::cout << "respuesta =  " << resta << std::endl;
    // Multipricacion
    std::cout << "primer dato de la multiplicacion \n";
    std::cin >> f;
    std::cout << "segundo dato" << std::endl;
    std::cin >> g;
    mul = f * g;
    std::cout << "respuesta =  " << mul << std::endl;


    //Division
    std::cout << "primer dato de la division \n";
    std::cin >> div1;
    std::cout << "segundo dato" << std::endl;
    std::cin >> div2;
    divi = div1 / div2;
    std::cout << " respuesta " << divi << std::endl;
    //Potencia
    std::cout << "ingresa tu potencia\n";
    std::cin >> h;
    potencia = h * h;
    std::cout << " total " << potencia <<  std::endl;

    //Raiz
    std::cout << "ingresa tu raiz\n";
    std::cin >> i;
    raiz = sqrt(i);
    std::cout << "total " << raiz << std::endl;

    std::cout << "Seria todo, que pase una bonita tarde";
}

