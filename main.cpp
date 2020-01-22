#include <iostream>
#include<vector>
#include<fstream>
#include<algorithm>

using namespace std;

ifstream in("spiecius.txt");
ofstream out("rezultatai.txt");

void skaitomPusinam(vector<int> &A);
void spausdink(vector<int> A, string text);
void lyginu(vector<int> &A);

int main()
{
    vector<int> M, Ap;

    skaitomPusinam(M);
    spausdink(M, "Nuskaite");
    lyginu(M);


    in.close();
    out.close();
    return 0;
}

void skaitomPusinam(vector<int> &A){
    int a=0;
    while(!in.eof()){
        in>>a;
        A.push_back(a);
    }
}

void spausdink(vector<int> A, string text){
    out<<text<<endl;
    for(int i=0; i<A.size(); i++){
        out<<A[i]<<" ";
}
out<<endl;
}
void lyginu(vector<int> &A){

    while(A.size()>1){
        if(A[0]<A[1]){
                A.erase(A.begin());
                A[0]++;
                cout<<A.size();
    }
    else if(A[0]>A[1]){
       A.erase(A.begin()+1);
                A[0]++;
                cout<<A.size();
    }
    else{
        A[0]*=2;
        A.erase(A.begin()+1);

    }

    spausdink(A, "bandom\n");
}

}
