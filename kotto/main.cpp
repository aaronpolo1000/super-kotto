#include <iostream>

using namespace std;
// GetTime
long GetTime(int &hh, int &mm, int &ss) {
  time_t     rawtime;
  struct tm *timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  hh = timeinfo->tm_hour;
  mm = timeinfo->tm_min;
  ss = timeinfo->tm_sec;
  return timeinfo->tm_hour * 10000 + timeinfo->tm_min * 100 + timeinfo->tm_sec;
}

// GetDate
long GetDate(int &year, int &mes, int &dia, int &ds) {
  time_t     rawtime;
  struct tm *timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  year = 1900 + timeinfo->tm_year;
  mes  = 1 + timeinfo->tm_mon;
  dia  = timeinfo->tm_mday;
  ds   = 1 + timeinfo->tm_wday;
  return (1900 + timeinfo->tm_year) * 10000 + (1 + timeinfo->tm_mon) * 100 +
                                                          timeinfo->tm_mday;
}

int main()
{
    char key;
    cin<<key;
    if(key =='a'){
            //IndDescripArt.Txt:.

    }
    if(key =='b'){
            //ListaCompras.Txt:.

    }
     if(key =='c'){
            //ListaCompras.Txt:. ordenado

    }

}
