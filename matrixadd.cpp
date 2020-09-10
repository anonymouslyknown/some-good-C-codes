// matrix addition

#include <iostream>
using namespace std;

 void matrixaddition(int n, int m){

     int m1[n][m], m2[n][m];

      cout << "Enter first matrix" << endl;

      for( int i=0 ; i<n ; i++){
        for( int j=0 ; j<m ; j++){
            cin >> m1[i][j];
        }
      }

        cout << "Enter second matrix" << endl;

      for( int i=0 ; i<n ; i++){
        for( int j=0 ; j<m ; j++){
            cin >> m2[i][j];
        }
      }

        cout << "The matrix addition is :" << endl;
        for( int i=0 ; i<n ; i++){
        for( int j=0 ; j<m ; j++){
            cout << m1[i][j] + m2[i][j] << "   ";
        }
        cout << endl;
      }
 }




  int main(){

      int n , m;
      cout << "Enter dimensions of matrix" << endl;
      cin >> n >> m;


    matrixaddition( n , m );

    return 0;
  }
