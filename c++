[12/4 8:33 p. m.] .....: #include <iostream>
using namespace std;

int main() {

    string palabra = "AMOR";
    
    for (int i = 0; i <= 6; i++) {
        for (int j = 0; j <= 6; j++) {

            if ((i == 0 && (j == 1 || j == 5)) ||
                (i == 1 && (j == 0 || j == 2 || j == 4 || j == 6)) ||
                (i == 2 && (j <= 6)) ||
                (i == 3 && (j >= 1 && j <= 5)) ||
                (i == 4 && (j >= 2 && j <= 4)) ||
                (i == 5 && j == 3)) {

                cout << palabra << " ";
            } else {
                cout << "     ";
            }
        }
        cout << endl;
    }

    return 0;
}
[12/4 8:33 p. m.]...
..:AMOR     AMOR
AMOR   AMOR   AMOR
AMOR AMOR AMOR AMOR
  AMOR AMOR AMOR
    AMOR AMOR
      AMOR