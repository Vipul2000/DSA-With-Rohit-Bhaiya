// Date-26-09-2023 Pattern problem second lecture

/*print this pattern
* 
* * 
* * *
* * * *
* * * * *

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int row,col;
     for(row=1; row<=5; row++){
          for(col=1; col<=row; col++){
               cout<<"*"<<" ";
          }
          cout<<endl;
     }
     return 0;
}*/

/*print this pattern
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int row,col;

     for(row=1; row<=5; row++){

          for(col=1; col<=row; col++){
               cout<<col<<" ";
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
5 5 5 5 5

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int row,col;

     for(row=1; row<=5; row++){
          for(col=1; col<=row; col++){
               cout<<row<<" ";
          }
          cout<<endl;
     }
     return 0;
}*/

/*print this pattern
1 
2 1
3 2 1
4 3 2 1
5 4 3 2 1

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int row,col;

     for(row=1; row<=5; row++){
          for(col=row; col>=1; col--){
               cout<<col<<" ";
          }
          cout<<endl;
     }
     return 0;
}*/

/*Print this pattern
a 
b b
c c c
d d d d
e e e e e

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int row,col;

     for(row=1; row<=5; row++){
          char name = 'a'+row-1;
          for(col=1; col<=row; col=col+1){
               cout<<name<<" ";
          }
          cout<<endl;
     }
     return 0;
}*/

/*Print this pattern
* * * * * 
* * * * 
* * *
* * 
*

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int row, col;
     for(row=1; row<=5; row++){
          for(col=1; col<=5-(row-1); col++){
               cout<<"*"<<" ";
          }
          cout<<endl;
     }
     return 0;
}*/

/*Print this pattern
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int row,col;
     for(row=1; row<=5; row++){
          for(col=1; col<=5-(row-1); col++){
               cout<<col<<" ";
          }
          cout<<endl;
     }
     return 0;
}*/

/*Print this pattern
5 
5 4
5 4 3
5 4 3 2
5 4 3 2 1


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int row, col;
     for(row=1; row<=5; row++){
          for(col=5; col>=5-(row-1); col--){
                cout<<col<<" ";
          }
          cout<<endl;
     }
     return 0;
}*/
