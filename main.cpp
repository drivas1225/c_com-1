#include <iostream>

using namespace std;

float Cuadrado(float n){
    return n*n;
}
float triangulo(float b, float h){

    return b*h/2;

}

float circulo (float r){

    return r*r*3.14;

}




int main()
{


/*

    cout<< "ingresar radio de circulo"<< endl;
    float r;
    float res;
    cin>>r;

    res = r*r*3.1416;
    cout<<"el area del circulo es :"<<res<<endl<<endl;
//////////////////////////////////////////////////////////
    cout<< "ingresar lado de cuadrado"<< endl;
    float l;
    float rescua;
    cin>>l;

    rescua= l*l;
    cout<<"el area del cuadrado es :"<<rescua<<endl<<endl;
//////////////////////////////////////////////////////////
    cout<< "ingresar base de triangulo"<< endl;
    float b;
    float restri;

    cin>>b;
    cout<< "ingresar altura de triangulo"<< endl;
    float h;
    cin>>h;

    restri = b*h/2;
    cout<<"el area del circulo es :"<<restri<<endl<<endl;

//////////////////////////////////////////

*/

    float x;
    float y;
    //float tem;

    cout<<"ingresar x"<<endl;
    cin>>x;
    cout<<"ingresar y"<<endl;
    cin>>y;

    cout<< "x="<<x<<endl;
    cout<< "y="<<y<<endl;

   /* tem=x;
    x=y;
    y=tem;

    */
    x=x+y;
    y=x-y;
    x=x-y;

    /*cout<< "despues del cambio"<<endl;
    cout<< "x="<<x<<endl;
    cout<< "y="<<y<<endl;

*/

    if(x==y)
        cout<< x<<" es igual "<<y<<endl;

    if(x>y)
        cout<< x<<" es mayor que "<<y<<endl;

    if(x<y)
        cout<< y<<" es mayor que "<<x<<endl;






    return 0;
}
