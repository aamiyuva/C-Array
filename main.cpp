#include <iostream>
#include <string>

using namespace std;

int main () {
  int i, n, total=0, marks[6];

  cout << "Total : " << total << endl;

  for (i = 0; i < 6; i++) {
    cout << "Enter a number : ";
    cin >> marks[i];
  }


  for (n = 0; n < 6; n++) {
    total = total + marks[n];
    cout << "Total : " << total << endl;
  }

  cout << "------ Loop ends ------\n" ;
  cout << "Total : " << total << endl;

  // int i, score[5], max;
  // int n, a;

  // int score[] = { 50, 56, 61, 63, 70};

  // string users[] = { "Sagnink", "Manas", "Anupam", "Manisha", "Sutapa"};

  // for (n = 0; n < 5; n++) {
  //   cout << "Welcome, " << users[n] << endl;
  // }

  // for (a = 0; a < 5; a++) {
  //   cout << "Square of " << score[a] << " = " << score[a] * score[a] << endl;
  // }

  
  // cout << "Hare Krishna !\n";

  // cout << users[1] << endl;
  // cout << "Enter 5 scores : \n";
  // cin >> score[0];
  // max = score[0];
  //
  // for (i = 1; i < 5; i++) {
  //   cin >> score[i];
  //   if (score[i] > max)
  //     max = score[i];
  // }
  //
  // cout << "The highest score is " << max << endl;




  return 0;
}
