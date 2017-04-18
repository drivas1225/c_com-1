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

bool es_primo (int x){

    int i = 2;
    bool res =true;

    while( i<x ){
        if( x%i == 0 ){
            res = res && false;
            break;
        }
        else
            res = res && true;
        i++;
    }
    return res;
}

int sum(const int * arr, const int tam){
    int suma = 0;
    for(int i =0 ; i < tam ; i++ ){
        suma = suma + *arr;
        arr++;
    }

    return suma;
}


float prom(const int * arr, const float tam){

    return (float)sum(arr,tam)/tam;
}

void invert(int * arr, const int tam){

    int temp;
    for(int i =0 ; i < (tam/2);i++){
      temp = *(arr+i);
      *(arr+i) = *(arr+tam-1-i);
      *(arr+tam-1-i) = temp;


    }

}

void ord_arr(int * arr, const int tam){

     for(int i = 0 ; i<tam;i++){
         for(int j = i; j<tam;j++){
            if(*(arr+j)<*(arr+i)){
                int tem;
                tem = *(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=tem;
            }

         }

    }

}

int tam_a(char * arr){

    int tam=0;
    for( int i =0 ; *arr != '\0';i++,arr++){
        tam=tam+1;

    }
    return tam;

}

void imprimir_m(int ** mat , int filas , int columnas){
    for (int i = 0 ; i<filas;i++){
        for (int j = 0 ; j < columnas;j++){
            cout<< mat[i][j] <<" ";
        }
        cout<<endl;
    }

    cout<<endl;

}

void mul_mat(int ** mat1, int ** mat2,int fil1,int col1,int fil2,int col2){

    if (col1 != fil2)
        cout<<"no se puede hacer la multiplicacion :(";
        return ;

    int ret[fil1][col2];
    for (int i = 0 ;i < fil1;i++){
        for (int j = 0; j < col2;j++){
            ret[i][j]=0;
            for(int k = 0 ; k < col1; k++){
                ret[i][j]=ret[i][j]+(mat1[i][k]*mat2[k][j]);

            }

        }


    }

     for (int i = 0 ; i<fil1;i++){
        for (int j = 0 ; j < col2;j++){
            cout<< ret[i][j] <<" ";
        }
        cout<<endl;

     }

    return ;
}





int main()
{

    int fila;
    cout<<"ingrese numero de filas de la matriz: ";
    cin>>fila;
    int columna;
    cout<<"ingrese numero de columna de la matriz: ";
    cin>>columna;
    int tem;

    int mat_a[fila][columna];
    for (int i = 0 ; i<fila;i++){
        for (int j = 0 ; j < columna;j++){
            cout<<"ingrese valor de la matriz: ";
            cin>>tem;
            mat_a[i][j]=tem;


        }

    }
    int fil;
    cout<<"ingrese numero de filas de la matriz: ";
    cin>>fil;
    int col;
    cout<<"ingrese numero de columna de la matriz: ";
    cin>>col;

    int mat_b[fil][col];
    for (int i = 0 ; i<fil;i++){
        for (int j = 0 ; j < col;j++){
            cout<<"ingrese valor de la matriz: ";
            cin>>tem;
            mat_b[i][j]=tem;


        }

    }


    for (int i = 0 ; i<fila;i++){
        for (int j = 0 ; j < columna;j++){
            cout<< mat_a[i][j] <<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for (int i = 0 ; i<fil;i++){
        for (int j = 0 ; j < col;j++){
            cout<< mat_b[i][j] <<" ";
        }
        cout<<endl;
    }

    cout<<endl;


    mul_mat(mat_a,mat_b,fila,columna,fil,col);






    /*char arr[] = "hello";
    cout<<tam_a(arr);
    */
    /*int tam;
    cout<<"ingresar el tamaño:"<<endl;
    cin>>tam;
    int arreglo[tam];
    int suma;
    int pro;


    for(int i =0 ; i < tam ;i++){
        int p;
        cout<<"ingresar numero"<<endl;
        cin>>p;
        arreglo[i] = p;


    }

    for(int i =0 ; i < tam ;i++){
        cout<<arreglo[i]<<" ";

    }

    cout<<endl;
    /*invert(arreglo,tam);
    cout<<endl;
    for(int i =0 ; i < tam ;i++){
        cout<<arreglo[i];

    }*/
    /*ord_arr(arreglo,tam);

    for(int i =0 ; i < tam ;i++){
        cout<<arreglo[i]<<" ";

    }
    */
    /*suma = sum(arreglo,tam);
    pro=prom(arreglo,tam);
    cout<<endl;
    cout<<"la suma es:"<<suma<<endl;
    cout<<"el promedio es:"<<pro<<endl;
*/

    /*suma = sum(arreglo,tam);
    pro = prom(arreglo,tam);

    cout<< "la suma del arreglo es:"<< suma <<endl;
    cout<< "el promedio de los elementos es:"<<pro<< endl;

    */



   /* int prim;
    cout<<"ingresar el rando de numero primos"<<endl;
    cin>>prim;
    int cont = 0;



    for(int i = 2 ; i < prim ; i++){

        if (es_primo(i)==true){
            cout<< i<<" ";
            cont++;
        }
    }*/


    //cout<<endl;

    //cout<<cont;

    /*int a_prim[cont];

    int y=0;

    for(int i = 2 ; i < prim ; i++){

        if (es_primo(i)==true)
            a_prim[y] = i;
            y++;

    }

    int j;
    cout<< "posicion"<<endl;
    cin>>j;
    cout<<a_prim[j];

*/








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
    //int arreglo[10];

/*    int tem;
    cout<<"ingresar numero"<<endl;
    cin>>tem;
    arreglo[0]=tem;
    cout<<"ingresar numero"<<endl;
    cin>>tem;
    arreglo[1]=tem;
    cout<<"ingresar numero"<<endl;
    cin>>tem;
    arreglo[2]=tem;
    cout<<"ingresar numero"<<endl;
    cin>>tem;
    arreglo[3]=tem;

    cout<<arreglo[0]<<" "<<arreglo[1]<<" "<<arreglo[2]<<" "<<arreglo[3]<<endl;

    int tem2;
    tem2=arreglo[0];
    arreglo[0]=arreglo[3];
    arreglo[3]=tem2;
    tem2=arreglo[1];
    arreglo[1]=arreglo[2];
    arreglo[2]=tem2;

    cout<<arreglo[0]<<" "<<arreglo[1]<<" "<<arreglo[2]<<" "<<arreglo[3]<<endl;


*/


/*    for(int i =0 ; i < (sizeof(arreglo)/sizeof(arreglo[0])) ;i++){
        int p;
        cout<<"ingresar numero"<<endl;
        cin>>p;
        arreglo[i] = p;

    }
    for(int i =0 ; i < (sizeof(arreglo)/sizeof(arreglo[0])) ;i++){
        cout<<arreglo[i];

    }

    int tam;
    tam=(sizeof(arreglo)/sizeof(arreglo[0]));
    int p;
/*

    for(int i =0 ; i < (tam/2);i++){
        p=arreglo[i];
        arreglo[i]=arreglo[tam-1-i];
        arreglo[tam-1-i] = p;
    }

    cout<<endl<<endl;

    for(int i =0 ; i < (sizeof(arreglo)/sizeof(arreglo[0])) ;i++){
        cout<<arreglo[i];

    }
*/
/*
cout<<endl <<endl;

    int sum=0;

    for(int i =0 ; i <tam;i++){
        sum = sum + arreglo[i];
    }

    cout<<sum<<endl<<endl;

    int may=0;
    int mayt;

    for(int i = 0 ; i<(tam-1);i++){

        if (arreglo[i]>arreglo[i+1])
            mayt=arreglo[i];
        else
            mayt=arreglo[i+1];

        if(mayt>may)
                may=mayt;
    }

    cout<< may<<endl;


*/









    return 0;
}
