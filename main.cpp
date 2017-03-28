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

void mayor (float x,float y){

    if(x==y)
    cout<<"\n Son iguales";
    else
    {
    if(x>y)
    cout<<"\n el mayor es:"<<x;
    else
    cout<<"\n el mayor es:"<<y;
    }

}

void swap_num (float & x , float & y){

    double tem;
    tem=x;
    x=y;
    y=tem;

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
/*
    float x;
    float y;
    //float tem;

    cout<<"ingresar x"<<endl;
    cin>>x;
    cout<<"ingresar y"<<endl;
    cin>>y;

    cout<< "x="<<x<<endl;
    cout<< "y="<<y<<endl;

    swap_num(x,y);

    cout<< "x="<<x<<endl;
    cout<< "y="<<y<<endl;

*/
 /*   x=x+y;
    y=x-y;
    x=x-y;
*/
    /*cout<< "despues del cambio"<<endl;
    cout<< "x="<<x<<endl;
    cout<< "y="<<y<<endl;

*/


 /*   int a=5;
    int b=6;
    int z;

    if (a>b)
        z=a;
    else
        z=b;

    z=(a>b)?a:b;


    cout<<"ingresar a"<<endl;
    cin>>a;
    cout<<"ingresar b"<<endl;
    cin>>b;

    cout<<"el mayour es "<<(z=(a>b)?a:b)<<endl;
*/
    int score[5];

    for(int i =0 ; i < (sizeof(score)/sizeof(score[0])) ;i++){
        score[i] = i;
        cout<<score[i]<<endl;
    }










    return 0;
}
