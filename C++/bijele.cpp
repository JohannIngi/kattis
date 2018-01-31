#include <iostream>

int main()
{
    int king = 0, queen = 0, rook = 0, bishop = 0, knight = 0, pawn = 0;
    int king1 = 0, queen1 = 0, rook1 = 0, bishop1 = 0, knight1 = 0, pawn1 = 0;
    std::cin >> king >> queen >> rook >> bishop >> knight >> pawn;
    while (king != 1) {
        if (king > 1) {
            king--;
            king1--;
        }
        else if(king < 1){
        king++;
        king1++;
        }
    }
    while (queen != 1) {
        if (queen > 1) {
            queen--;
            queen1--;
        }
        else if (queen < 1) {
            queen++;
            queen1++;
        }
    }
    while (rook != 2) {
        if (rook > 2) {
            rook--;
            rook1--;
        }
        else if (rook < 2) {
            rook++;
            rook1++;
        }
    }
    while (bishop != 2) {
        if (bishop > 2) {
            bishop--;
            bishop1--;
        }
        else if (bishop < 2) {
            bishop++;
            bishop1++;
        }
    }
    while (knight != 2) {
        if (knight > 2) {
            knight--;
            knight1--;
        }
        else if (knight < 2) {
            knight++;
            knight1++;
        }
    }
    while (pawn != 8) {
        if (pawn > 8) {
            pawn--;
            pawn1--;
        }
        else if (pawn < 8) {
            pawn++;
            pawn1++;
        }
    }
    std::cout << king1 << " "<< queen1 << " " << rook1 << " " << bishop1 << " " << knight1 << " " << pawn1 << "\n";

    return 0;
}