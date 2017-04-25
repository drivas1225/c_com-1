#include <iostream>
#include <string>

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

void multiplicacion ( int v1[][3] , int v2[][3] ,int v3[][3], int f1 ,int c1 , int f2 , int c2){
    for (int i = 0 ; i < f1 ; i++ ){
        for (int j = 0 ; i < c2 ; j++)
            for (int k = 0 ; k < f2 ; k++ ){
                v3[i][j] += v1[i][k] * v2[k][j];
            }
    }

    for (int i = 0 ; i<f1;i++){
        for (int j = 0 ; j < c2;j++){
            cout<< v3[i][j] <<" ";
        }
        cout<<endl;

    }

}



void insertion_sort (int arr[], int tam){
	 	int j;
	 	int temp;

	for (int i = 0; i < tam; i++){
		j = i;
		while (j > 0 && arr[j] < arr[j-1]){
			  temp = arr[j];
			  arr[j] = arr[j-1];
			  arr[j-1] = temp;
			  j--;
			  }
		}
}

void reversa(int arr[] , const int tam){

    int temp;
    for(int i =0 ; i < (tam/2);i++){
      temp = arr[i];
      arr[i] = arr[tam-1-i];
      arr[tam-1-i] = temp;


    }

}
void invert(int * arr, const int tam){

    int temp;
    for(int i =0 ; i < (tam/2);i++){
      temp = *(arr+i);
      *(arr+i) = *(arr+tam-1-i);
      *(arr+tam-1-i) = temp;


    }

}

int sumaRecursiva(int * arr, int tam){

    int res = 0;
    if (tam == 0){
        return res;
    }
    else{
    res = res + *arr;
    arr++;
    return res +sumaRecursiva(arr,tam-1);
    }

}

void palindrome(string pal){

    int tam = pal.size();
    bool res = true;
    for (int i = 0 ;i < tam/2 ;i++){
        if (pal[i]==pal[tam-i-1])
            res = res && true;
        else{
            res = false;
            break;
        }

    }
    if(res == true){
        cout<< "es un palindrome";
    }
    else
        cout<<"no es un palindrome";

}

int main()
{
    /*int fila;
    cout<<"ingrese numero de filas de la matriz: ";
    cin>>fila;
    int columna = 3;
    cout<<"ingrese numero de columna de la matriz: ";
    cin>>columna;
    int tem;

    int mat_a[3][3];
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
    cout<<"ingrese numero de columna de la matriz: ";
    cin>>col;

    int mat_b[3][3];
    for (int i = 0 ; i<fil;i++){
        for (int j = 0 ; j < col;j++){
            cout<<"ingrese valor de la matriz: ";
            cin>>tem;
            mat_b[i][j]=tem;


        }

    }

    int mat_c[3][3];


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

    multiplicacion(mat_a,mat_b,mat_c,fila,columna,fil,col);
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
    int tam = 4;
    int arr[tam]={3,1,2,4};
    for(int i =0 ; i < tam ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    /*
    invert(arr,tam);
    for(int i =0 ; i < tam ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reversa(arr,tam);
        for(int i =0 ; i < tam ;i++){
        cout<<arr[i]<<" ";
    }*/
    //cout<<sumaRecursiva(arr,tam);
    //string pal = "aviva";
    //palindrome(pal);
    insertion_sort(arr,tam);
    for(int i =0 ; i < tam ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
