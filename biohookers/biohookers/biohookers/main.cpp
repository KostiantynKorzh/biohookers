#include <iostream>

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
    
    string a="auuggauuagu";                 //splitting
    for (int i = 0; i<a.size(); i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
