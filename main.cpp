#include <iostream>
#include <vector>
#include <cstring>
#include <string>

using namespace std;
/*
void st(int o, string *s1, int n1, int k1, int mas1){
for(int i=0;i<n1;i++){
    for(int j=0;j<k1;j++){
        if(s1[o][j]!=s1[i][j]) mas1[o][i]++;
    }
}
}
*/


int main()
{
    int n, k;
    cout<< "Enter number of proteins"<<endl;
    cin>>n;
    int mas [100] [100];
    cout<< "Enter length of proteins"<<endl;
    cin>>k;
    string s[n];
    for (int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<k; j++)
        {
            mas[i][j]=0;
        }
    }



    for(int i=0; i<n; i++)
    {
        for(int t=0; t<n; t++)
        {
            for(int j=0; j<k; j++)
            {
                if(s[i][j]!=s[t][j]) mas[i][t]++;
            }
        }
    }



    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<mas[i][j];
            cout<<" ";
        }
        cout<<endl;
    }


    return 0;
}



/*
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
}#include <iostream>
#include <vector>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    int n, k;
    cout<< "Enter number of proteins"<<endl;
    cin>>n;
    cout<< "Enter length of proteins"<<endl;
    cin>>k;
    string s[n];
    for (int i=0;i<n;i++) cin>>s[i];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<k; j++) cout<<s[i][j]<<" ";
        cout<<endl;
    }
    return 0;
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
    for(int i = 0;i<v1.size();i++){
        cout<<proteins[0].v[i];
    }
*/
//ÎÏÛÒÊÀ ×ÅÐÅÇ ÃÅÒÒÅÐÛ

//ÑÐÀÂÍÈÂÀÍÈÅ ÁÅËÊÎÂ (ÍÅ Î×ÅÍÜ ÐÀÁÎÒÀÅò, ïðîáëåìà â âûçîâå âåêòîðà èç êëàññà -- proteins[i].v[j]     è òîìó ïîäîáíûå âûçîâû; êîä êîìïëèðóåòñÿ íî íå ðàáîòàåò, êðàøèòñÿ íà ýòîé ñòðîêå(ñêîðåå âñåãî)
/*    for (int i=0; i<n; i++){

        for(int j=0; j<k; j++){

            if(proteins[i].v[j]==proteins[i+1].v[j]) m[i+1] [i]++;
        }
    } */
