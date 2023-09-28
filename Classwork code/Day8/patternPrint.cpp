/* Date 25-09-2023, video lecture no-6, Day 8/180

 Print this pattern
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * *


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int row, col;
     for(row=1; row<=5; row++){
          for(col=1; col<=5; col++){
               cout<<"*"<<" ";
          }
          cout<<endl;
     }

     return 0;
}*/

/*Print this pattern
10 10 10 10 10 
10 10 10 10 10 
10 10 10 10 10 
10 10 10 10 10 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int row, col;
     for(row=1; row<=4; row++){
          for(col=1;col<=5;col++){
               cout<<"10"<<" ";
          }
          cout<<endl;
     }
     return 0;
}*/

/*Print this pattern
1 1 1 1 1 
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int row, col;
     for(row=1; row<=5; row++){
          for ( col = 1; col <= 5; col++)
          {
               cout<<row<<" ";
          }
          cout<<endl;
          
     }
     return 0;
}*/

/*print this pattern
1 2 3 4 5 
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int row, col;
     for(row=1; row<=5; row++){
          for(col=1;col<=5;col++){
               cout<<col<<" ";
          }
          cout<<endl;
     }
     return 0;
}*/

/*Print this pattern
5 4 3 2 1 
5 4 3 2 1
5 4 3 2 1 
5 4 3 2 1
5 4 3 2 1

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int row, col;
     for(row=1; row<=5; row++){
          for(col=5; col>=1; col--){
               cout<<col<<" ";
          }
          cout<<endl;
     }
     return 0;
}*/

/*Print this pattern
1 4 9 16 25 
1 4 9 16 25
1 4 9 16 25
1 4 9 16 25 
1 4 9 16 25

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int row,col;

for(row=1; row<=5; row++){
     for(col=1; col<=5; col++){
          cout<<col*col<<" ";
     }
     cout<<endl;
}

     return 0;
}*/

/*Print this pattern
a a a a a 
b b b b b
c c c c c
d d d d d
e e e e e

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int row,col;
     for(row=1; row<=5; row++){
          char name = 'a'+ row-1;
          for(col=1;col<=5;col++){
               cout<<name<<" ";
          }
          cout<<endl;
     }

     return 0;
}*/

/*Print this pattern
a b c d e 
a b c d e
a b c d e
a b c d e 
a b c d e

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int row;
     char col;

     for(row=1;row<=5;row++){
          for(col='a'; col<='e'; col++){
               cout<<col<<" ";
          }
          cout<<endl;
     }
     return 0;
}*/

/*print this pattern
1 2 3 4 5 
6 7 8 9 10
11 12 13 14 15 
16 17 18 19 20
21 22 23 24 25

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int row,col;

     int count = 1;
     for(row=1; row<=5; row++){
          for(col=1;col<=5; col++){
              cout<<count<<" ";
              count= count+1;
          }
          cout<<endl;
     }
     return 0;
}*/