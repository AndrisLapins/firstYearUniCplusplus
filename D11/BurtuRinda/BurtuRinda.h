// BurtuRinda.h - D uzdevuma header fails
//Autors - Andris Lapiòð
//Izveidots: 04/12/18
class BurtuRinda
{
private:
    int n = 0;
    char q[5];
    // char* q; (in 'metodes.cpp' include 'mas = new int[this->n];'
public:
    BurtuRinda();
    ~BurtuRinda();
    bool enqueue(char v);
    char dequeue();
    int Count();
    bool IsEmpty();
};
