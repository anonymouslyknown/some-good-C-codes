// binary search

#include <iostream>
using namespace std;

bool binarysearch(int,int, int [], int);

int main(){
        int n;
        cout << " Enter length of array " << endl;
        cin  >> n;
        int a[n];
        cout << "enter elements of array in ascending form " << endl;
        for ( int i=0 ; i < n ; i++){
            cin >> a[i];
        }
        int find;
        cout  << "Enter number to find" << endl;
        cin >> find;
        binarysearch(0,n-1,a,find);
}

bool binarysearch(int start, int end, int a[], int find){
    int middle;
    if(end>=start){
       middle = (end +start +1)/2;
    if(a[middle]==find){
        cout << " element found at location " << middle +1 << endl;
    }
    else if(a[middle]< find){
        binarysearch(middle+1,end,a,find);
    }
    else{
        binarysearch(start,middle-1,a,find);
    }
    }

    else{
        cout << "Not found!";
        return false;
    }
    return true;

}
