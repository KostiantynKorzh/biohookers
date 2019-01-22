#include <iostream>
#include <vector>
#include <cstring>
#include <string>

using namespace std;

class Splitting
{
public:
    string s;
    vector<char>v;
    void split();
    void out(int y);
   vector <char> get();
    Splitting();
    Splitting(string s1);
};

Splitting::Splitting()
{
    s="";
    v.clear();
}

Splitting::Splitting(string s1)
{
    s=s1;
}

void Splitting::split()
{
    getline(cin,s);
    vector<char>v(s.begin(), s.end());
    int vectorSize = (int)v.size();
    for(int i = 0; i < vectorSize; i++){

        v.push_back(v[i]);
    }

}
void Splitting::out(int y){

   cout<<v[y];

}
vector <char> Splitting::get(){
return v;
}

int main(int argc, const char * argv[])
{
    int n, k;
    cout<< "Enter number of proteins"<<endl;
    cin>>n;
    cout<< "Enter length of proteins"<<endl;
    cin>>k;
    string s;
    int m [n] [k];
    for (int i=0;i<n;i++){
        for (int j=0; j<k;j++){
        m [i] [j] = 0;
        }
    }
    vector <Splitting> proteins (n+1);
    for (int i = 0; i <= n; i++){
        proteins[i].split();
    }
    vector<char>v1;
    v1=proteins[0].get();
//ОПЫТКА ЧЕРЕЗ ГЕТТЕРЫ

    //СРАВНИВАНИЕ БЕЛКОВ (НЕ ОЧЕНЬ РАБОТАЕт, проблема в вызове вектора из класса -- proteins[i].v[j]     и тому подобные вызовы; код комплируется но не работает, крашится на этой строке(скорее всего)
/*    for (int i=0; i<n; i++){

        for(int j=0; j<k; j++){

            if(proteins[i].v[j]==proteins[i+1].v[j]) m[i+1] [i]++;
        }
    } */
    return 0;
}
