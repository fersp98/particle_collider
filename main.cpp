#include <iostream>
#include "Particle.h"
#include "Controller.h"

int main() {
    //En el vector vect se almacenarán todas las partículas
    vector<Particle*> vect;
    vect.push_back(new Triangle(435,165,1,1,3,4));
    vect.push_back(new Rectangle(102,459,1,-1,6,4));
    vect.push_back(new Line(271,368,1,1,272,369));
    vect.push_back(new Circle(203,17,1,1,10));
    vect.push_back(new Circle(203,17,1,1,10));

    //Recorrido de las partículas de vect
    for(auto x:vect){
        x->imprimir();
        cout<<endl;
    }

    //Se inicializa el controlador con el parametro vect
    Controller cont(vect);

    //Se mueven todas las partículas
    cout<<"Move All"<<endl;
    cont.move_all();

    //Se imprimen los nuevos valores de los elementos de vect
    for(auto &x:vect){
        x->imprimir();
        cout<<endl;
    }

    //Imprime area total
    cout<<cont.total_area()<<endl;
    //Imprime perimetro total
    cout<<cont.total_perimeter()<<endl;
    //Imprime la cantidad de particulas
    cout<<cont.count_all()<<endl;
    cout<<cont.count_collisions();
    return 0;
}