/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Домашнее задание № 1 

// #include <iostream>

// using namespace std;

// int main()
// {
    
//     // string name;
//     // cin >> name;
//     // cout << name;

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
    
//   int a, b, s, p, r, d;
//   cin >> a >> b;
  
//   s = a + b;
  
//   p = a * b; 
  
//   r = a - b;
  
//   if (a != 0 && b != 0){
//     d = a / b;
//   }
  

//   cout << "сумма = " << s << endl;
//   cout << "произведение = " << p << endl;
//   cout << "разность = " << r << endl;
//   cout << "деление = " << d << endl;
//     return 0;
// }



// #include <iostream>

// using namespace std;

// int main()
// {
    
//      float b, c, x;
    // cin >> b >> c;
    // x = -c / b;
    
    // if(x == 0){
    //     cout << "error";
        
    // }
    // else{
    //     cout << "y = " << b * x + c;
    // }
    // return 0;
    
// }


// #include <iostream>
// #include <math.h>
// #include <cmath>

// using namespace std;

// int main()
// {
//     float a, b, c, x;
//     double x1, x2, d;
//     cin >> a >> b >> c;
//     d = pow(b, 2) - 4 * a * c;
    
  
    
//     if(a == 0){
//     x = -c / b;
//     cout << x;
//     }
//     else if(d < 0){
//         cout << "нет корней";
//     }
//     else{
//     x1 = (- b + sqrt(d)) / 2 * a;
//     x2 = (- b - sqrt(d)) / 2 * a;
        
//     cout << "x1 = " << x1 << "x2 = " << x2 << endl;
//     }
//         return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
    
//     int a, b, c;
//     cout << "Введите состояние лампы 0-выключена 1-включена:";
//     cin >> a;
//     cout << "Введите состояние штор 0-задвинуты 1-раздвинуты:";
//     cin >> b;
//     cout << "Введите время суток 0-ночь 1-утро 2-день 3-вечер:";
//     cin >> c;
//     if(c == 2 || b == 1 && a == 1){
//         cout << "В комнате светло";
//     }
//     else{
//         cout << "В комнате темно";
//     }

//     return 0;
// }


// #include <iostream>

// using namespace std;

// int main()
// {
//     float h, R, r, l, S, V;
//     cout << "h:";
//     cin >> h;
//     cout << "R:";
//     cin >> R;
//     cout << "r:";
//     cin >> r;
    
//     l = sqrt(h*h + (R - r)*(R - r));
//     S = 3.14 * (R*R (R + r)*l + r*r);
//     V = 3.14 * h * (R*R + R * r + r * r) / 3;
    
//     if (h == 0 || R == 0 || r == 0 || l == 0){
//         cout << "error";
//     }
//     else{
//         cout << "S =" << S << endl;
//         cout << "V =" << V << endl;
//         cout << "l =" << l << endl;
//     }
//     return 0;
// }



#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float h, R, r, l, S, V;
    cout << "h:";
    cin >> h;
    cout << "R:";
    cin >> R;
    cout << "r:";
    cin >> r;
    
    l = sqrt(h*h + (R - r)*(R - r));
    S = 3.14 * (R*R+(R + r)*l + r*r);
    V = 3.14 * h * (R*R + R * r + r * r) / 3;
    
    if (h == 0 || R == 0 || r == 0 || l == 0){
        cout << "error";
    }
    else{
        cout << "S =" << S << endl;
        cout << "V =" << V << endl;
        cout << "l =" << l << endl;
    }
    return 0;
}




