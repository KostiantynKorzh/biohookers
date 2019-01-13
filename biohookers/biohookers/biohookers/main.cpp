#include <iostream>
#include <vector>
#include <cstring>
#include <string>

using namespace std;

/* План проекта:
 - алгоритм разбивки (splitting) строки на символы, но при этом сохранить порядок (типа там на схеме они должны быть друг над другом)
 - алгоритм нахождения отличий и выбора доминантных ознак (я думаю это все в одно)
 - алгоритм "склеивания ознак" (CD там). Тут я ебу что делать, как там правильно их "склеивать", просто один поверх другого или что?
 - еще узнать про ебучие таблицы ознак (там все не просто так)
 - алгоритм весов на дереве предков
 - само дерево предков
 - оболочка Qt Creator с всякими textedit-ами и тому прочее. Про это париться не нужно, разве что как потом слить правильно код отсюда туда и как там вывести дерево
 
 &&&&&&&&&&&&&&&&&&&&&&&&&&__Есть идеи - пиши__&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
 */

class Splitting
{
public:
    string s;
    vector<char>v;
    void enter();
    void split();
    void show();
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

void Splitting::enter()
{
    getline(cin ,s);
    cout << s << " enter" << endl;
}

void Splitting::split()
{
    vector<char>v(s.begin(), s.end());
    for(int i = 0; i < (int)v.size(); i++)
    {
        cout<< "1" << " ";
        v.push_back(v[i]);
    }
    cout << " split" << endl;
}
void Splitting::show()
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << " show" <<endl;
}





int main(int argc, const char * argv[]) {
    
    int n, k;
    string s;
    /*cout << "Enter number of proteins" << endl;
    cin >> n;
    cout << "Enter protein chains" << endl;
    vector<char>v1;
    vector<char>v2;
    vector<char>v3;
    vector<char>v4;
    vector<char>v5;*/
    Splitting a(s);
    a.enter();
    a.split();
    a.show();

    /*for(int i = 0; i <= n; i++)
    {
        getline(cin ,s);
        cout << s << endl;     //проверка
        vector<char>v(s.begin(), s.end());
        for(int i = 0; i < v.size(); i++)
        {
            //1cout << v[i] << endl;
            v1.push_back(v[i]);
            
        }
    }
    for(int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
        
    }
    for(int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
        
    }
    for(int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
        
    }
    for(int i = 0; i < v4.size(); i++)
    {
        cout << v4[i] << " ";
        
    }
    for(int i = 0; i < v5.size(); i++)
    {
        cout << v5[i] << " ";
        
    }
    */
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*
    cout << "Enter length of proteins" << endl;
    cin>>k;
    char temp [n];
    vector < vector <char> > v;
    
    for (int i = 0; i < n; i++){
        getline (cin, s);
        strcpy(temp, s.c_str());
        for (int j = 0; j < k; j++){
            v[i][j] = temp [j];
        }
    }
    
    
    
    
    
    
    
    
    
<<<<<<< HEAD
    }
=======
    } */
    /* сравнивание матриц будем делать через двумерные вектора
     
     
     
     
     vector< vector <int> > vvi;
     //... initial
     for(vector<vector<int> >::iterator it = vvi.begin(); it != vvi.end(); ++it){
     for(vector<int>::iterator it2 = (*it).begin(); it2 != (*it).end(); ++it2){
     // ...out
     }
     }
     
     
     
     
     
     
     #include <iostream>
     #include <vector>
     #include <algorithm>
     #include <iterator>
     #include <iomanip>
     
     int main()
     {
     const size_t row = 5;
     const size_t col = 3;
     std::vector<std::vector<int> > imatrix(row);
     // Заполнение
     for(size_t i = 0; i < row; ++i)
     {
     imatrix[i].resize(col);
     for(size_t j = 0; j < col; ++j)
     imatrix[i][j] = rand() % 666;
     }
     // Печать
     std::for_each(imatrix.begin(), imatrix.end(), [](std::vector<int>& ivec)
     {
     std::for_each(ivec.begin(), ivec.end(), [](int i)
     {
     std::cout << std::left << std::setw(5) << i;
     });
     std::cout << std::endl;
     });
     system("pause");
     return 0;
     }
     
     
     
     
     
     */
    return 0;
}
