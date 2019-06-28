// PiPU0401.cpp
/**********************************************************************************
PiPLU0401. Sast�d�t C++ programmu,
kas nodro�ina izteiksmes x +1/(y+z) korektu izr��in��anu.
Korektas izr��in��anas nosac�jumi:
y+z nav 0 un skait�i x, y un z ir robe��s -50..50.
Izmantot e-kursa piem�ru Att_20-3.cpp.
***********************************************************************************/
// Autors: Uldis Straujums
// Rad�ts: 08.05.2018. Modific�ts piem�rs no e-kursa "Programmat�ras izstr�des pamati" 20.noda�as

#include <iostream>
using namespace std;

double one_divided_x_plus_y(double x, double y)
{
if (x+y == 0) throw "ERROR: Division by zero";
return 1 / (x+y);
};
double x_plus_one_divided_y_plus_z(double x, double y, double z)
{
double div = one_divided_x_plus_y(y, z);
if (x > 50 || y > 50 || z>50) throw 50;
else if (x < -50 || y < -50 || z<-50) throw -50.0;
return x + div;
};
void process (double x, double y, double z)
{
try
{
cout << x_plus_one_divided_y_plus_z(x, y, z) << endl;
}
catch (const char *error_text)
{ cout << error_text << endl; }
catch (int error_num)
{ cout << "ERROR: Addend too big" << endl; }
catch (...)
{ cout << "ERROR: Unknown error" << endl; };
cout << "Skanosana: catch beigas" << endl;
};
int main ()
{
/* Korektas izpildes nosac�jumi:
- nedr�kst dal�t ar 0
- saskait��anas oper�cija apstr�d� skait�us -50..50 */
process (2, -50, 50); // 2 + 1/(-50+50)  -> Division by zero
process (51, 4, 0.5); // 51 + 1/(4+0.5)  -> Addend too big
process (2, -51, 0.5);// 2 + 1/(-51+0.5) -> Unknown error
process (2, 4, 0.5);  // 2 + 1 / (4+0.5) -> 2.22
return 0;
}
