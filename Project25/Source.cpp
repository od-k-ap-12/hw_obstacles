#include <iostream>
#include "Participant.h"
#include "Obstacle.h"
using namespace std;

int main() {
    const int HumanCount = 3;
    const int CatCount = 1;
    const int RobotCount = 2;
    const int WallCount = 2;
    const int TrackCount = 2;
    Participant* Humans = new Human[HumanCount]{Human(11,12),Human(6,8),Human(0,0)};
    Participant* Cats = new Cat[CatCount]{Cat(9,20)};
    Participant* Robots = new Robot[RobotCount]{Robot(5,5),Robot(1,0)};
    Obstacle* Walls = new Wall[WallCount]{Wall(9),Wall(2)};
    Obstacle* Tracks = new Track[TrackCount]{Track(9),Track(2)};
    for (int i = 0; i < HumanCount; i++) {
        for (int j = 0; i < WallCount; j++) {
            if (Walls[j].OvercomeObstacle(Humans[i]) == true) {
                cout << Humans[i].GetType() << " has surpassed the " << Walls[j].GetType() << " " << Walls[j].GetInfo() << endl;
            }
            if (Walls[j].OvercomeObstacle(Humans[i]) == false) {
                cout << Humans[i].GetType() << " has not surpassed the " << Walls[j].GetType() << " " << Walls[j].GetInfo() << endl;
            }
        }
        for (int k = 0; k < TrackCount; k++) {
            if (Tracks[k].OvercomeObstacle(Humans[i]) == true) {
                cout << Humans[i].GetType() << " has surpassed the " << Tracks[k].GetType() << " " << Tracks[k].GetInfo() << endl;
            }
            if (Tracks[k].OvercomeObstacle(Humans[i]) == false) {
                cout << Humans[i].GetType() << " has not surpassed the " << Tracks[k].GetType() << " " << Tracks[k].GetInfo() << endl;
            }
        }
    }
    for (int i = 0; i < CatCount; i++) {
        for (int j = 0; i < WallCount; j++) {
            if (Walls[j].OvercomeObstacle(Cats[i]) == true) {
                cout << Cats[i].GetType() << " has surpassed the " << Walls[j].GetType() << " " << Walls[j].GetInfo() << endl;
            }
            if (Walls[j].OvercomeObstacle(Cats[i]) == false) {
                cout << Cats[i].GetType() << " has not surpassed the " << Walls[j].GetType() << " " << Walls[j].GetInfo() << endl;
            }
        }
        for (int k = 0; k < TrackCount; k++) {
            if (Tracks[k].OvercomeObstacle(Cats[i]) == true) {
                cout << Cats[i].GetType() << " has surpassed the " << Tracks[k].GetType() << " " << Tracks[k].GetInfo() << endl;
            }
            if (Tracks[k].OvercomeObstacle(Cats[i]) == false) {
                cout << Cats[i].GetType() << " has not surpassed the " << Tracks[k].GetType() << " " << Tracks[k].GetInfo() << endl;
            }
        }
    }
    for (int i = 0; i < RobotCount; i++) {
        for (int j = 0; i < WallCount; j++) {
            if (Walls[j].OvercomeObstacle(Robots[i]) == true) {
                cout << Robots[i].GetType() << " has surpassed the " << Walls[j].GetType() << " " << Walls[j].GetInfo() << endl;
            }
            if (Walls[j].OvercomeObstacle(Robots[i]) == false) {
                cout << Robots[i].GetType() << " has not surpassed the " << Walls[j].GetType() << " " << Walls[j].GetInfo() << endl;
            }
        }
        for (int k = 0; k < TrackCount; k++) {
            if (Tracks[k].OvercomeObstacle(Robots[i]) == true) {
                cout << Robots[i].GetType() << " has surpassed the " << Tracks[k].GetType() << " " << Tracks[k].GetInfo() << endl;
            }
            if (Tracks[k].OvercomeObstacle(Cats[i]) == false) {
                cout << Robots[i].GetType() << " has not surpassed the " << Tracks[k].GetType() << " " << Tracks[k].GetInfo() << endl;
            }
        }
    }

    delete[] Walls;
    delete[] Tracks;
    delete[] Cats;
    delete[] Robots;
    delete[] Humans;

}