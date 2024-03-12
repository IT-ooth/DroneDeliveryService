#include <vector>
#include <iostream>
#include "Map.h"

using namespace std;

/*
* 
2차원 bitmap을 받아서 Map에 저장

Map은 드론의 위치에서 상하좌우로 이동 가능한 공간을 파악
이동 가능한 공간이 파악되었으면 그 공간으로 전진
아니면 while문이 종료되면서 프로세스 종료

*/
void run() {

	int x_size = 5, y_size = 5, drone_x = 2, drone_y = 4;

	vector<vector<int>> v(x_size, vector<int>(y_size, 0));
	v[0][1] = 1;
	v[1][1] = 1;
	v[2][1] = 1;
	v[2][2] = 1;
	v[3][2] = 1;
	v[4][2] = 1;


	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << v[i][j] << " ";
		}
		cout << "\n";
	}
	Map m = Map(v);	

	Drone d = Drone(drone_x, drone_y);
	
	cout << m.findLoad(d);
	/*
	while (m.findLoad(d) != NONE) {
		cout << d.getPos()[0] << " " << d.getPos()[1] << "\n";

		switch (m.findLoad(d))
		{
		case TOP:
			d.setPos(d.getPos()[0], d.getPos()[1] - 1);
			break;
		case BOTTOM:
			d.setPos(d.getPos()[0], d.getPos()[1] + 1);
			break;
		case RIGHT:
			d.setPos(d.getPos()[0] + 1, d.getPos()[1]);
			break;
		case LEFT:
			d.setPos(d.getPos()[0] - 1, d.getPos()[1]);
			break;
		default:
			break;
		}
	}
	*/
	
}
int main() {
	run();
	return 0;  
}
