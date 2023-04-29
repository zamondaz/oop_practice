void setup() {
	size(400, 400);
	fill(177, 19, 19);

	int x, y, z, w;
	x = 200;
	y = x - 100;
	z = x + 100;
	circle(x, x, x);
	line(y, x, z, x);
	line(x, y, x, z);
	x += 60;
	y += 20;
	z -= 20;
	w = y + 20;
	line(y, x, z, w);
	line(y, w, z, x);

	x = 200; y = 200; z = 100; w = 100;

	arc(x - 20, y - 30, z - 60, w - 70, 0, PI / 2);
	arc(x - 20, y + 30, z - 60, w - 70, 3 * PI / 2, 2 * PI);
	arc(x + 20, y - 30, z - 60, w - 70, PI / 2, PI);
	arc(x + 20, y + 30, z - 60, w - 70, PI, 3 * PI / 2);

	arc(x - 52, y - 70, z + 4, w - 38, 0, PI / 2);
	arc(x - 52, y + 70, z + 4, w - 38, 3 * PI / 2, 2 * PI);
	arc(x + 52, y - 70, z + 4, w - 38, PI / 2, PI);
	arc(x + 52, y + 70, z + 4, w - 38, PI, 3 * PI / 2);

	arc(x - 30, y - 15, z - 80, w - 70, 0, PI / 2);
	arc(x - 30, y + 15, z - 80, w - 70, 3 * PI / 2, 2 * PI);
	arc(x + 30, y - 15, z - 80, w - 70, PI / 2, PI);
	arc(x + 30, y + 15, z - 80, w - 70, PI, 3 * PI / 2);

	arc(x - 70, y - 39, z - 64, w - 22, 0, PI / 2);
	arc(x - 70, y + 39, z - 64, w - 22, 3 * PI / 2, 2 * PI);
	arc(x + 70, y - 39, z - 64, w - 22, PI / 2, PI);
	arc(x + 70, y + 39, z - 64, w - 22, PI, 3 * PI / 2);
}