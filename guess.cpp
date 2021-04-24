#include <iostream>
using namespace std;

int main() {
   int num = rand()%100 + 1;
   int guess;
   cin>>guess;
   int n = 1;
   while(guess!=num){
   if(guess<num){
   cout<<"Too low, Try again\n";
   }
   else{
   cout<<"Too High, Try again\n";
   }
   cin>>guess;
   n++;
   }
   cout<<"Congratulation you found the number in "<<n<<" guesses\n";
   return 0;
}
