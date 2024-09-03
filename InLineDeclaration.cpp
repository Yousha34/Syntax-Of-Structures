#include <iostream>
#include <cstring>
using namespace std ;

int main (){

    struct pokemon{

        char name[50] ;
        int power ;
        float size ;
        char level ;

    } ;

    // pokemon pikachu ;
    
    // strcpy( pikachu.name, "Pikachu" ) ;
    // pikachu.power = 100 ;
    // pikachu.size = 120.5 ;
    // pikachu.level = 's' ;

    pokemon pikachu = { "Pikachu", 100, 120.5, 'S' } ;

    cout << "Speed of pikachu : " << pikachu.name << endl ;
    cout << "Power of pikachu : " << pikachu.power << endl ;
    cout << "Size of pikachu : " << pikachu.size << endl ;
    cout << "Level of pikachu : " << pikachu.level << endl ;

    return 0 ;
}