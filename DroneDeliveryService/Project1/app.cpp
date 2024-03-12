#include <vector>
#include <iostream>
#include "Map.h"

using namespace std;

/*
* 
2���� bitmap�� �޾Ƽ� Map�� ����

Map�� ����� ��ġ���� �����¿�� �̵� ������ ������ �ľ�
�̵� ������ ������ �ľǵǾ����� �� �������� ����
�ƴϸ� while���� ����Ǹ鼭 ���μ��� ����

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
