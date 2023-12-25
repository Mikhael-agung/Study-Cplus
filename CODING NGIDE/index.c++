#include <iostream>
#include <string>


using namespace std;
int main () {
//     cout << "hello" << endl;
//     cout << "my name" << endl << endl << endl;
//     cout << "Buzzard" ;

// } // namespace std;

// segitiga SIKU
// using namespace std;
// int main()
// {
    std::string z = "";
    for (int i = 0; i < 10; i++)
    {
        for (int x = 0; x <= i; x++)
        {
            z += '*';
        }
        z += '\n';
    }
    std::cout << z;
    return 0;


//  papan catur

// using namespace std;
// int main() {

std:: string s = "";
     int panjang = 10;
     int lebar = 5;

     for(int i = 1; i <= lebar; i++ ){
        if(i % 2 == 0){
            for( int x = 1; x <= panjang; x++){
                if( x % 2 == 0){
                    s += ' ';
                } else {
                    s += '#';
                }                
            }
        } else {
            for (int z = 1; z <= panjang; z++){
                if(z % 2 == 1) {
                    s += ' ';
                } else {
                    s += '#';
                }
            }
        }
        s += '\n';
     }

    std:: cout << s; 
    return 0;



// belah kektupat separuh sebelah kiri!!

// int main() {
    std:: string d = "";
        int t = 10;

    for(int a = 0; a < t; a++) {
        for(int s = 0; s <= a; s++) {
            d += '*';
        }
        d += '\n';
    }

    for(int g = 1; g <= t; g++ ){
        for(int v = t; v > g; v--){
            d += '*';
        } 
        for(int Q = 0; Q < g; Q++){
            d += ' ';
        }

        d += '\n';
    }

    std:: cout << d;
    return 0;
}

