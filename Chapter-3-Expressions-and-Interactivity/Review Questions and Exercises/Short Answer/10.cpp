/********************************************************************
*
*	10. Rewrite the following statements with combined assignment
*       operators:
*
*       x = x + 5;
*       total = total + subtotal;
*       dist = dist / rep;
*       ppl = ppl * period;
*       inv = inv - shrinkage;
*       num = num % 2;
*
* 	Jesus Hilario Hernandez
* 	January 2nd 2018
*
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int x = 2,
        total = 2,
        subtotal = 2,
        dist = 2,
        rep = 2,
        ppl = 2,
        period = 2,
        inv = 2,
        shrinkage = 2,
        num = 2;

        // Original statements rewritten with combined assignment operators
        x += 5;             // 2 += 5;  7
        total += subtotal;  // 2 += 2;  4
        dist /= rep;        // 2 /= 2;  1
        ppl *= period;      // 2 *= 2;  4
        inv -= shrinkage;   // 2 -= 2;  0
        num %= 2;           // 2 %= 2;  0

        cout << endl;
        cout << "x += 5: " << x << endl;
        cout << "total += subtotal: " << total << endl;
        cout << "dist /= rep: " << dist << endl;
        cout << "ppl *= period: " << ppl << endl;
        cout << "inv -= shrinkage: " << inv << endl;
        cout << "num %= 2: " << num << endl;
        cout << endl;

    return 0;
}
