#include <iostream>
using namespace std ;

int factorial(int x){

    int fact = 1 ;

    for( int i = 2; i <= x; i++ ){
        fact = fact * i ;
    }

    return fact ;

}

int combination(int n, int r){

    int ncr = factorial(n) / ( factorial(r) * factorial(n-r) ) ;
    return ncr ;

}

int main(){

    int n ;

    cout << "Enter number : " ;
    cin >> n ;

    for( int i = 0; i <= n-1; i++ ){

        for(int k = 1; k <= n-i; k++ ){
            cout << " " ;
        }

        for( int j = 0; j <= i; j++ ){
            int ncr = combination(i,j) ;
            cout << ncr << " " ;
        }
        cout << endl ;
    }

    return 0 ;
}

