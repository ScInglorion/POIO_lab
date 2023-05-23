#include <iostream>
using namespace std;
class knight{
private:
    int health;
    int strenght;
    string name;
public:
    knight(int h, int s, string n): health(h), strenght(s), name(n){ }
    void sayHi(){ cout<<"Hi I'am "<< name << " my health is " <<health<<"\n";} //nothing exciting yet
    //a friend function "fight". "&" denotes passing arguments as areference
    // to make possible modification of the input objects
    friend void fight(knight& k1, knight& k2);
 };
void fight(knight& k1, knight& k2){
    int hit1, hit2;

    cout<<endl<<"wobodobodoo!"<<endl<<endl;
    hit1 = rand() % k1.strenght;
    hit2 = rand() % k2.strenght;
    k1.health = k1.health - hit2;
    k2.health = k2.health - hit1;
}

int main()
{
    knight jozek( 100,100, "Jozek");
    knight zdzich( 100,100, "Zdzichu");
    jozek.sayHi(); zdzich.sayHi();
    srand (time(NULL));
    fight(jozek,zdzich);
    jozek.sayHi(); zdzich.sayHi();
    return 0;
}
