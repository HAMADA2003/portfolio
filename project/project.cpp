
#include <iostream>
using namespace std;
int main()
{
  int age;
  bool ask=0;
  string driving;
 cout << "How old are you?\n";
 cin >> age;
 cout << "Do you have a driving license?\n";
 cout << "yes : no\n";
 cin >> driving;
 if(driving =="yes")
 {
     ask=true;
 }
 else
 {
     ask=false;
 }
 if(age>21&&age<50&&ask==true)
 {
     cout << "hired\n";
 }
 else
 {
   cout << "Rejected\n";
 }
    return 0;
}
