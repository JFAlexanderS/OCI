#include <cstdio>

using namespace std;

const int MAXT = 1001000;
int bspeed[MAXT];
int espeed[MAXT];

int N, M;
int main() {
	scanf("%d %d", &N, &M);

	int curt = 0;
	for(int i = 0; i < N; ++i) {
		int speed, time;
		scanf("%d %d", &speed, &time);
		for(int j = 0; j < time; ++j) {
			bspeed[curt] = speed;
			++curt;
		}
	}

	curt = 0;
	for(int i = 0; i < M; ++i) {
		int speed, time;
		scanf("%d %d", &speed, &time);
		for(int j = 0; j < time; ++j) {
			espeed[curt] = speed;
			++curt;
		}
	}

	int ans = 0;
	int leader = 0; // 1 if bessie is ahead (or previously ahead, but nowtied), -1 if elsie ahead (or previously ahead, but now tied).

	int bpos = 0;
	int epos = 0;

	for(int t = 0; t < MAXT; ++t) {
		bpos += bspeed[t];
		epos += espeed[t];
		if (bpos > epos) {
			if (leader == -1) { // leader was elsie
				++ans;
			}
			leader = 1;
		} else if (epos > bpos) {
			if (leader == 1) {
				++ans;
			}
			leader = -1;
		}
	}

	printf("%d\n", ans);
	return 0;
}
