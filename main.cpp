#include<iostream>
#include"menu.h"
using namespace std;


int main(){
    menu*  principal = new menu("principal", false);
    menu * filho1 = new menu("filho1", false);
    menu*  neto11 = new  menu("neto11", false);
    menu*  neto12 = new  menu("neto12", false);

    menu * filho2 = new menu("filho2", false);
    menu * neto21 = new  menu("neto21", true);
    menu*  neto22 = new  menu("neto 22", false);

    principal->include(filho1);
    principal->include(filho2);

    filho1->include(neto11);
    filho1->include(neto12);

    filho2->include(neto21);
    filho2->include(neto22);

    cout<<principal->list_items()<<endl;

    principal = principal->foward(1);

    cout <<principal->list_items()<<endl;

    principal = principal->back();
    
    cout << principal->list_items();



}