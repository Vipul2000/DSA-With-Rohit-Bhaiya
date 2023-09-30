/*Print this pattern
        * 
      * *
    * * * 
  * * * *
* * * * *


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int row, col;

     for(row=1; row<=5;row++){

          // Space print
           for(col=1; col<=5-row; col++)
           cout<<"  ";

           //star print
           for(col=1; col<=row; col++){
               cout<<"* ";
           }

           cout<<endl;
     }
     return 0;
}*/

/*Print this pattern
       1
     2 2
   3 3 3 
 4 4 4 4    

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int row, col;
     int n;
     cout<<"Input number";
     cin>>n;

     for(row=1; row<=n; row++){
          // space print
          for(col=1; col<=n-row; col++)
          cout<<" ";

          // Number print
          for(col=1;col<=row;col++){
              cout<<row<<" ";
              cout<<endl;
          }
     }
     return 0;
}*/

/*Print this pattern
        1
      1 2
    1 2 3
  1 2 3 4

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int row, col;
     for(row=1; row<=5; row++){
          //space print
          for(col=1; col<=5-row; col++)
          cout<<"  ";

          //Number print
          for(col=1;col<=row; col++){
               cout<<col<<" ";
               cout<<endl;
          }
     }
     return 0;
}
*/

/*Print this pattern
        A
      A B
    A B C
  A B C D
A B C D E


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int row,col;

     for(row=1; row<=5; row++){

          // space print
          for(col=1; col<=5-row; col++){
              cout<<" ";

               // char print
               for(char name ='A'; name<='A'+row-1; name++){
               cout<<name<<" ";
               }
               cout<<endl;
          }
     }
     return 0;
}*/