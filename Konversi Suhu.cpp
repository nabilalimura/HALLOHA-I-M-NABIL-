#include<iostream>
using namespace std;
int main () {
int nomor,hasil;
float celcius, reamur, fahrenheit;

cout<<"===========================PROGRAM KONVERSI SUHU============================"<<endl;
cout<<"1. CELCIUS    >>> REAMUR"<<endl;
cout<<"2. CELCIUS    >>> FAHRENHEIT"<<endl;
cout<<"3. REAMUR     >>> CELCIUS"<<endl;
cout<<"4. REAMUR     >>> FAHRENHEIT"<<endl;
cout<<"5. FAHRENHEIT >>> CELCIUS"<<endl;
cout<<"6. FAHRENHEIT >>> REAMUR"<<endl;
cout<<"============================================================================"<<endl;
cout<<endl;
cout<<"Masukkan Nomor yang anda inginkan = ";
cin>>nomor;
cout<<endl;
switch(nomor)
{
case 1:
cout<<"Masukkan suhu dalam celcius = ";
cin>>celcius;
hasil=(celcius*4/5);
cout<<"Suhu dalam reamur adalah = "<<hasil<<endl;
break;

case 2:
cout<<"Masukkan suhu dalam celcius = ";
cin>>celcius;
hasil=(celcius*9/5)+32;
cout<<"Suhu dalam fahrenheit adalah = "<<hasil<<endl;
break;

case 3:
cout<<"Masukkan suhu dalam reamur = ";
cin>>reamur;
hasil=(reamur*5/4);
cout<<"Suhu dalam celcius adalah = "<<hasil<<endl;
break;

case 4:
cout<<"Masukkan suhu dalam reamur = ";
cin>>reamur;
hasil=(reamur*9/4)+32;
cout<<"Suhu dalam fahrenheit adalah = "<<hasil<<endl;
break;

case 5:
cout<<"Masukkan suhu dalam fahrenheit = ";
cin>>fahrenheit;
hasil=(fahrenheit-32)*5/9;
cout<<"Suhu dalam celcius adalah = "<<hasil<<endl;
break;

case 6:
cout<<"Masukkan suhu dalam fahrenheit = ";
cin>>fahrenheit;
hasil=(fahrenheit-32)*4/9;
cout<<"Suhu dalam reamur adalah = "<<hasil<<endl;
break;

return 0;
}
}
