//vowel count in a string

#include <iostream>
#include <cstring>

using namespace std;

void vowelcount(int , char *);
int main(){

    char s[100];
    int len;
    cout << " Enter string" << endl;
    cin >> s;
    len = strlen(s);
    vowelcount(len,s);
    return 0;
}

void vowelcount(int len , char *s){
    int a[5]= {0,0,0,0,0} , total = 0;
    for( int i=0 ; i < len ; i++){
        if(s[i]=='a' || s[i]=='A'){
            a[0]++;
        }
        else if (s[i]=='e' || s[i]=='E'){
            a[1]++;
        }
        else if (s[i]=='i' || s[i]=='I'){
            a[2]++;
        }
        else if (s[i]=='o' || s[i]=='O'){
            a[3]++;
        }
        else if (s[i]=='u' || s[i]=='U'){
            a[4]++;
        }
    }
    total= a[0]+a[1]+a[2]+a[3]+a[4];

        cout << " Total number of vowels are : " << total << endl;
        cout << " total occurrence of a : " << a[0] << endl;
        cout << " total occurrence of e : " << a[1] << endl;
        cout << " total occurrence of i : " << a[2] << endl;
        cout << " total occurrence of o : " << a[3] << endl;
        cout << " total occurrence of u : " << a[4] << endl;
}
