#include "overloading.h"
#include <iostream>
using namespace std;

//fungsi prototype
int volumePersegi (int panjang=1, int  lebar=1 ,int tinggi=1);

int main(){
cout << "Volume persegi dengan panjang 10, lebar 1 dan tinggi 1 adalah  " <<volumePersegi (10) <<endl;
cout << "Volume persegi dengan panjang 10, lebar 5 dan tinggi 1 adalah  " <<volumePersegi (10,5) <<endl;
cout << "Volume persegi dengan panjang 10, lebar 5 dan tinggi 6 adalah  " <<volumePersegi (10,5,6) <<endl;
return 0;
}

int volumePersegi (int panjang, int  lebar, int tinggi){
return panjang*lebar*tinggi;
}
