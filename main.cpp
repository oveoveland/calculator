#include <iostream>
#include "string"
using namespace std;

int  main() {


  double x;
  cout << "sheiyvanet ricxvi: "<<endl;
  cin >> x;




  double y;
  cout <<"sheiyvanet meore ricxvi"<<endl;
  cin >> y;


  string  sum;

  cout<< "airchiet moqmedeba: +,-,/,*: ";
  cin >> sum;


//moqmedebebi//

    if (sum == "+"){
    cout << x + y;
}
    if (sum == "-"){
        cout<< x - y;
    }
    if (sum == "*"){
        cout<< x * y;
    }
    if (sum == "/"){
        cout <<  x / y;
    } else{
        cout << "araswori moqmedeba";
    }





    return 0;
}
