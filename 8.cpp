#include <iostream>

using namespace std;

int Vowel_Count(string text) {
  int ctr = 0;
  for(int i = 0; i < int(text.size()); i++){
    if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u')
      ++ctr;
    if (text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U')
      ++ctr;
  }
  return ctr;

}

int main() {
        cout <<"The word is Eage of eagle : - \n Vowel : \n"<< Vowel_Count("Eage of eagle") << endl;
      
        return 0;
}