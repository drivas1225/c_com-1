#include <iostream>

using namespace std;

float millas_k(float i){
    if (i<0){
        cout<<"el numero es negativo";
        return 0;
    }

    return i*1.6093;
}


void tabla(){

    cout<<"grados Fahrenheit   "<<"grados Celsius"<<endl;
    for (float i = 0; i <=300 ; i+=20){
        cout << "  "<< i <<" = " << (i-32)/1.8<<endl;

    }

}

void prog(){
    int x;

    while(x!=(-1)){
    cout<<"ingresar numaro: ";
    cin >> x;
    if (x == -1){
        cout<<"el programa se detiene"<<endl;
        break;
    }
    if (x%2==0)
        cout<<"el numero es par"<<endl;
    else
        cout<<"el numero es impar"<<endl;
    }
}

long int pot(int base, int ex){
    long int res = 1;
    for(int i = 1;i<=ex;i++){
        res = res * base;
    }
    return res;
}

void pro_num(){
    int x;
    string num[10]={"cero","uno","dos","tres" ,"cuatro" ,"cinco" ,"seis" ,"siete" ,"ocho" ,"nuevo" };
    while(x!=(-1)){
        cout<<"ingresar numaro: ";
        cin >> x;
        if (x == -1){
            cout<<"el programa se detiene"<<endl;
            break;
        }
        if(0 <= x && x < 10){
            cout<<num[x]<<endl;
        }
        else
            cout<<"Numero no permitido"<<endl;
    }
}

float operador( char v ,float x , float y){

    char op[4]={'+','-','*','/'};

    if (v == '+')
        return x + y;
    if (v == '-')
        return x - y;
    if (v == '*')
        return x * y;
    if (v == '/')
        return x / y;
    else
        cout<< "operacion no permitida";
}

void swap_num (float & x , float & y){

    double tem;
    tem=x;
    x=y;
    y=tem;

}

void swap_pun (int * x , int * y){
    double tem;
    tem = *x;
    *x=*y;
    *y=tem;


}
void mul_mat(int mat1[][3], int mat2[][3],int fil1,int col1,int fil2,int col2){

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
}

void insert_short (int arr[],int tam){
    for (int i= 1; i < tam; i++){
        if(arr[i]<arr[i-1]){
            swap(arr[i],arr[i-1]);
        }

    }
}


int main()
{
/*    int fila;
    cout<<"ingrese numero de filas de la matriz: ";
    cin>>fila;
    int columna = 3;
    //cout<<"ingrese numero de columna de la matriz: ";
    //cin>>columna;
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
    int col=3;
    //cout<<"ingrese numero de columna de la matriz: ";
    //cin>>col;

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
*/
    //float m = 1;
    //cout<<millas_k(m)<<endl;
    //tabla();
    //prog();
    //cout<<pot(5,20);
    //pro_num();
    //cout<<operador('/',8,0);
    //float x = 5;
    //float y = 8;
    //swap_num(x,y);
    //swap_pun(&x,&y);
    //cout<<x<<"  "<<y;
    return 0;
}
