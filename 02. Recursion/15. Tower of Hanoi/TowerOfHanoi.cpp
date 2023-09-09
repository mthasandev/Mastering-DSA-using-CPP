#include<iostream>

using namespace std;

void TowerOfHanoi(int disks, int sourceTower, int auxilaryTower, int destinationTower){
    if(disks>0){
        TowerOfHanoi(disks-1, sourceTower, destinationTower, auxilaryTower);
        cout<<"Moving "<< sourceTower << " -> "<<destinationTower<<endl;
        TowerOfHanoi(disks-1, auxilaryTower, sourceTower, destinationTower);
    }
}

int main(){
    TowerOfHanoi(3, 1,2,3);
    return 0;
}