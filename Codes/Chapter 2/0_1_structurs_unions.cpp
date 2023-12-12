#include<iostream>
using namespace std;

typedef struct employee
{
 int id; // 4byte mem
 char favhero; //1 byte
 float salary; // 4 byte

}ep;   // we used ep so that we can just use the ep instead of typing the whole name as struct employee.e1 //

//Unions are used to share memory among the defined things inside a union since at a time only one thing is to be called out
// so the maximum memory will only be the highest among all //
union asset
{
    int gold; //4 byte
    char car;  //1 byte
    double stocks; // 4 byte
};

int main(){
    ep raman;  // or struct employee Raman//
    union asset m1;
    enum meal{ breakfast, lunch , dinner};  // enums make user datatype and they just make the readibility of the
    //programme more better//
    meal m2 = lunch;
    m1.stocks=12000;
    raman.id=24;
    raman.favhero='r';
    raman.salary=1200000;

    cout<<"the breakfast is "<<m2<<endl;
    cout<<"the value of id is "<<raman.id<<endl;
    cout<<"the value of character  is "<<raman.favhero<<endl;
    cout<<"the value of salary  is "<<raman.salary<<endl;
    cout<<"the value of stocks is "<<m1.stocks<<endl;


return 0;
}