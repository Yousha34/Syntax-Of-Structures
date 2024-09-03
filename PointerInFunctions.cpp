#include<iostream>
#include<cstring>
using namespace std ;

struct pokemon{

    char name[50] ;
    int power ;

} ;

void function2( pokemon* pikachu ){

    cout << "The name is : " << pikachu -> name << endl ;
    cout << "The power is : " << (*pikachu).power << endl ;

    return ;

} ;

void function1( pokemon* pikachu ){

    strcpy( (*pikachu).name, "Richu" ) ;
    pikachu -> power = 360 ;

    function2( pikachu ) ;

    return ;

} ;

int main(){

    pokemon pikachu ;

    strcpy( pikachu.name, "Pikachu" ) ;
    pikachu.power = 160 ;

    cout << "The name is : " << pikachu.name << endl ;
    cout << "The power is : " << pikachu.power << endl << endl ;

    function1( &pikachu ) ;

    return 0 ;
}