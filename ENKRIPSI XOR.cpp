#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

main(int argc,char *argv[])
{
    FILE *fin, *fout;
    char p, c;
    string K;
    int i;

    Fin = fopen (argv[1], "rb") ;
    if (Fin == NULL){
        cout << "Berkas " << argv[1] <<"tidak ada" endl;
        exit(0);
    }
    fout = fopen(argv[2, "wb"]);
    cout << "Kata kunci :" ; cin >> K;
    cout <<"Enkripsi" << argv[1] << "menjadi" << argv[2] << "...";
    i = 0;
    while (!feof(Fin))
    {
        p = getc (Fin);
        c = p ^ K(i); //operasi XOR
        putc (c, Fout);
        i = (i + 1) % K.leght ();
    }
    fclose(Fin);
    fclose(Fout);
}
