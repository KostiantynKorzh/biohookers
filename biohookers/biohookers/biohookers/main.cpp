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


int main(int argc, const char * argv[]) {
    
    int n, k;
    string s;
    cout << "Enter number of proteins" << endl;
    cin >> n;
    cout << "Enter length of proteins" << endl;
    cin>>k;
    for(int i = 0; i <= n; i++)
    {
        getline(cin ,s);
    //проверка
        vector<char>v(s.begin(), s.end());
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i] << endl;
            
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*  char temp [k];
     char mas [n] [k];
     //    vector < vector <char> > v;
     for (int i = 0; i < n; i++){
     cout << "Enter protein chain" << endl;
     getline (cin, s);
     strcpy(temp, s.c_str());
     for (int j = 0; j < k; j++){
     mas [i] [j] = temp [j];
     }
     }
     */
    
    
    
    
    
    
    
    
    
    
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
