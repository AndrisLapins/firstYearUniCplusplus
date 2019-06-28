// PiPU0401.cpp
/**********************************************************************************
PiPLU0401. Sastâdît C++ programmu,
kas nodroðina izteiksmes x +1/(y+z) korektu izrçíinâðanu.
Korektas izrçíinâðanas nosacîjumi:
y+z nav 0 un skaitïi x, y un z ir robeþâs -50..50.
Izmantot e-kursa piemçru Att_20-3.cpp.
***********************************************************************************/
// Autors: Uldis Straujums
// Radîts: 08.05.2018. Modificçts piemçrs no e-kursa "Programmatûras izstrâdes pamati" 20.nodaïas

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
/* Korektas izpildes nosacîjumi:
- nedrîkst dalît ar 0
- saskaitîðanas operâcija apstrâdâ skaitïus -50..50 */
process (2, -50, 50); // 2 + 1/(-50+50)  -> Division by zero
process (51, 4, 0.5); // 51 + 1/(4+0.5)  -> Addend too big
process (2, -51, 0.5);// 2 + 1/(-51+0.5) -> Unknown error
process (2, 4, 0.5);  // 2 + 1 / (4+0.5) -> 2.22
return 0;
}
