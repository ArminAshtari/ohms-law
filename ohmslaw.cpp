#include <iostream>
#include <string>
// Function declarations
double voltage(double I, double R);
double current(double V, double R);
double resistance(double V, double I);

int main()
{
double V ,R ,I ;
int k ;
    do
    {
        std::cout << "\n1. Find Voltage\n";
        std::cout << "2. Find Current\n";
        std::cout << "3. Find Resistance\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter: ";
        std::cin >> k;

        while (k <= 0 || k > 4)
        {
            std::cout << "Please select one of the above: ";
            std::cin >> k;
        }

        if (k == 1)
        {
            std::cout << "Enter Current (I): ";
            std::cin >> I;

            std::cout << "Enter Resistance (R): ";
            std::cin >> R;

            V = voltage(I, R);

            std::cout << "Voltage = " << V << std::endl;
        }

        else if (k == 2)
        {
            std::cout << "Enter Voltage (V): ";
            std::cin >> V;

            std::cout << "Enter Resistance (R): ";
            std::cin >> R;

            while (R <= 0)
            {
                std::cout << "Resistance must be greater than 0: ";
                std::cin >> R;
            }

            I = current(V, R);

            std::cout << "Current = " << I << std::endl;
        }

        else if (k == 3)
        {
            std::cout << "Enter Voltage (V): ";
            std::cin >> V;

            std::cout << "Enter Current (I): ";
            std::cin >> I;

            while (I <= 0)
            {
                std::cout << "Current must be greater than 0: ";
                std::cin >> I;
            }

            R = resistance(V, I);

            std::cout << "Resistance = " << R << std::endl;
        }

    } while (k != 4);

return 0;
    }
// Function definitions
double voltage(double I, double R)
{
    return I * R;
}
double current(double V, double R)
{
    return V / R;
}
double resistance(double V, double I)
{
    return V / I;
}