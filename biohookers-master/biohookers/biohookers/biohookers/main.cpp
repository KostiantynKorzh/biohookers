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
    getline(cin ,s);
    vector<char>v(s.begin(), s.end());
    int vectorSize = (int)v.size();
    for(int i = 0; i < vectorSize; i++)
    {
        v.push_back(v[i]);
        cout << v[i] << " ";
    }

}




int main(int argc, const char * argv[]) {

    int n, k;
    cout<< "Enter number of proteins"<<endl;
    cin>>n;
    cout<< "Enter length of proteins"<<endl;
    cin>>k;
    string s;
    vector <Splitting> proteins (n+1);
    for (int i = 0;i <= n;i++){
    proteins[i].split();
    cout<<endl;
    }

    return 0;
}
