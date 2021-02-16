#include "Card.hpp"

int main(int argc, char** argv)
{
    Card* KingKrush = new Card("King Krush", 8, 8, 8);
    Card* ElfLord = new Card("Elf Lord", 3, 2, 4);
    Card* CaptinCrounch = new Card("Captin Crounch", 6, 8, 4);
    Card* GoblinWarrior = new Card("Goblin Warrior", 9, 14, 3);
    Card* Sorcerer = new Card("Sorcerer", 5, 6, 5);
    //(*KingKrush).display();
    KingKrush->display();
    ElfLord->display();
    CaptinCrounch->display();
    GoblinWarrior->display();
    Sorcerer->display();
}