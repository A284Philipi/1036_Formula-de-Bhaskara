#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a=0, b=0, c=0, resultadocommais=0, resultadocommenos=0, delta=0;
    cin >> a;
    cin >> b;
    cin >> c;
    delta = (b * b) - ( 4 * a * c );
    if (delta < 0 || a == 0){
        cout << "Impossivel calcular" << endl;
    }else{
        resultadocommais = ( ( b * -1 ) + sqrt(delta) ) / (2 * a);
        resultadocommenos = ( ( b * -1 ) - sqrt(delta) ) / (2 * a);
        cout.precision(5);
        cout << fixed << "R1 = " << resultadocommais << endl;
        cout << fixed << "R2 = " << resultadocommenos << endl;
    }
    return 0;
}
