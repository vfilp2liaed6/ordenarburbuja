#include <iostream>
using namespace std;

struct Persona{
    int id;
    char apellidos[50];
    char nombre[50];
    int edad;
    float talla;
    int numero;
    int ahorro;
};

void imprimirLista(Persona[]);
void ordenarTelefono(Persona[]);

int main(){
    Persona p0 = {0,"PEREZ","JUAN",11,1.5,919862100,10};
    Persona p1 = {1,"QUISPE","LUISA",45,1.65,951862421,50000};
    Persona p2 = {2,"LOPEZ","MILENA",24,1.6,961862129,2000};
    Persona p3 = {3,"ALVAREZ","PABLO",52,1.7,961860111,80000};
    Persona p4 = {4,"ZEA","PEPE",5,0.8,971562021,0};
    Persona p5 = {5,"VILCA","ALBERTO",22,1.75,986452129,500};
    
    Persona relacion[6]={p0,p1,p2,p3,p4,p5};
    cout<<endl;
    ordenarTelefono(relacion);
    cout<<endl;
    imprimirLista(relacion);

    return 0;
}

void imprimirLista(Persona personas[]){
    cout<< "\t\tLISTA ORDENADA POR TELEFONO\n\n";
    cout<<"ID\t|"<<"APELL Y N0M"<<"\t|EDAD\t|"<<"TALLA\t|"<<"TELEFONO\t|"<<"AHORRO"<<endl;
    for(int i = 0; i<6; i++){
        cout<<personas[i].id<<"\t|"<<personas[i].apellidos<<","<<personas[i].nombre<<"\t|"
        <<personas[i].edad<<"\t|"<<personas[i].talla<<"\t|"<<personas[i].numero<<"\t|"
        <<personas[i].ahorro<<endl;
    }
}

void ordenarTelefono(Persona personas[]){
    int lista[6];
    Persona aux;
    for(int i=0; i<6; i++){//metodo burbuja
        for(int j=0; j<6; j++){
            if(personas[j].numero>personas[j+1].numero){
                aux = personas[j];
                personas[j] = personas[j+1];
                personas[j+1] = aux;
            }
            lista[i] = personas[i].id;//id por telefono
        }
    }
}
