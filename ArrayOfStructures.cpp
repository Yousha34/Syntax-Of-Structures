#include<iostream>
// #include<cstring>
using namespace std ;

int main(){

    typedef struct pokemon{

        int power ;
        int speed ;
        char level ;
        char name[50] ;

    } pokemon ;

    pokemon arr[3] ;

    for( int i = 0; i < 3; i++ ){

        cout << "Enter name : " ;
        cin >> arr[i].name ;

        cout << "Enter speed : " ;
        cin >> arr[i].speed ;

        cout << "Enter power : " ;
        cin >> arr[i].power ;

        cout << "Enter level : " ;
        cin >> arr[i].level ;

    }

    for( int i = 0; i < 3; i++ ){

        cout << "Speed : " << arr[i].speed << endl ;
        cout << "Power : " << arr[i].power << endl ;
        cout << "Level : " << arr[i].level << endl ;
        cout << "Name : " << arr[i].name << endl << endl ;

    }

    return 0 ;
}
