#include <iostream>
#define SIZE 9 // Sudoku tahtasýnýn boyutu

using namespace std;

void TahtayiYazdir(int tahta[SIZE][SIZE]){
int sutun,satir;
	for(int satir=0;satir<SIZE;satir++){
		for(int sutun=0;sutun<SIZE;sutun++){
				if(sutun == 3 || sutun == 6)
            cout << " | ";
		cout<<tahta[satir][sutun]<< " ";
	
			}
			if(satir==2 || satir==5){
				cout<<endl;
				for(int i=0;i<SIZE;i++){
					cout<<"---";
				}
			}
			cout<<endl;
		}
		
      }
	
bool kontrol(int tahta[SIZE][SIZE],int satir,int sutun,int num){
	
	for(int i=0;i<SIZE;i++){
		
		if( tahta[satir][i]==num || tahta[i][sutun]==num){
			return false;
		}
	}
	
	 int satirBasi = satir - satir % 3;
    int sutunBasi = sutun - sutun % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tahta[i + satirBasi][j + sutunBasi] == num) {
                return false;
            }
        }
    }

    return true;
}

bool SudokuCoz(int tahta[SIZE][SIZE]) {
    int satir, sutun;

    // Boþ hücre arayarak baþlayýn
    bool BosMu = false;
    for (satir = 0; satir < SIZE; satir++) {
        for (sutun = 0; sutun < SIZE; sutun++) {
            if (tahta[satir][sutun] == 0) {
                BosMu = true;
                break;
            }
        }
        if (BosMu) {
            break;
        }
    }

    // Boþ hücre yoksa Sudoku tamamlandý demektir
    if (!BosMu) {
        return true;
    }



for (int num = 1; num <= 9; num++) {
        if (kontrol(tahta, satir, sutun, num)) {
            tahta[satir][sutun] = num;
            if (SudokuCoz(tahta)) {
                return true;
            }
            tahta[satir][sutun] = 0; // Geri adým
        }
    }

    return false; // Bu noktaya kadar gelinmiþse çözüm yok demektir
}



int main(int argc, char** argv) {
	

	 int tahta[SIZE][SIZE] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if (SudokuCoz(tahta)) {
        cout << "Cozum:" << endl;
        TahtayiYazdir(tahta);
    } else {
        cout << "Cozum bulunamadi." << endl;
    }

	return 0;
}
